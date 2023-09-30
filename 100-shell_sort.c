#include "sort.h"

/*
 * Auth: codenvibes
 */

/**
 * swap_ints - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sorts an array of integers in ascending order using the
 *              Shell sort algorithm.
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size:  The number of elements in the array.
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	/* Initialize the gap sequence using Knuth's formula. */
    for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	/* Perform the Shell sort algorithm. */
    for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
            /* Compare and swap elements with a gap. */
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
        /* Print the current state of the array after each pass. */
		print_array(array, size);
	}
}
