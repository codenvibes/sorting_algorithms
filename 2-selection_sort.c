#include "sort.h"

/*
 * Auth: codenvibes
 */

/**
 * swap_ints - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers by dereferencing the
 * provided pointers.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers using the
 * selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 *
 * This function sorts an array of integers in ascending order using the
 * selection sort algorithm. If the input array is NULL or has less than 2
 * elements, no sorting is performed.
 * Time Complexity: O(n^2)
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
