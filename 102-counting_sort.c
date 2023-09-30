#include "sort.h"

/*
 * Auth: codenvibes
 */

/**
 * get_max - Get the maximum value in an integer array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * Return: The maximum value in the array.
 */

int get_max(int *array, int size)
{
	int max, i;

	for (max = array[0], i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}

/**
 * counting_sort - Perform counting sort on an integer array.
 * 
 * This function performs counting sort, a non-comparative sorting algorithm,
 * on the given integer array. It requires a known maximum value in the array.
 *
 * @array: Pointer to the integer array to be sorted.
 * @size: Size of the array.
 */

void counting_sort(int *array, size_t size)
{
	int *count, *sorted, max, i;

	if (array == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;
	max = get_max(array, size);
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(sorted);
		return;
	}

	/* Initialize the count array with zeros. */
    for (i = 0; i < (max + 1); i++)
		count[i] = 0;

	/* Count occurrences of each element in the array. */
    for (i = 0; i < (int)size; i++)
		count[array[i]] += 1;

    /* Adjust count array to store cumulative counts. */
	for (i = 0; i < (max + 1); i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);

	/* Build the sorted array using the count array. */
    for (i = 0; i < (int)size; i++)
	{
		sorted[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}

	/* Copy sorted values back to the original array. */
    for (i = 0; i < (int)size; i++)
		array[i] = sorted[i];

	free(sorted);
	free(count);
}
