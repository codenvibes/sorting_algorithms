#include "sort.h"

/*
 * Auth: codenvibes
 */

void swap_ints(int *a, int *b);
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow);
void bitonic_sort(int *array, size_t size);

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bitonic_merge - Recursively merge subarrays in bitonic order.
 *
 * This function performs a bitonic merge operation on the 'array' from 'start'
 * to 'start + seq', depending on the 'flow' (UP or DOWN).
 *
 * @array: The array to be merged.
 * @size: The total size of the array.
 * @start: The starting index of the subarray to be merged.
 * @seq: The size of the subarray to be merged.
 * @flow: The merge direction, UP or DOWN.
 */
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow)
{
	size_t i, jump = seq / 2;

	if (seq > 1)
	{
		for (i = start; i < start + jump; i++)
		{
			if ((flow == UP && array[i] > array[i + jump]) ||
			    (flow == DOWN && array[i] < array[i + jump]))
				swap_ints(array + i, array + i + jump);
		}
		bitonic_merge(array, size, start, jump, flow);
		bitonic_merge(array, size, start + jump, jump, flow);
	}
}

/**
 * bitonic_seq - Recursively create bitonic sequences and merge them.
 *
 * This function recursively divides the 'array' into bitonic sequences and
 * merges them in the specified 'flow' order.
 *
 * @array: The array to be sorted.
 * @size: The total size of the array.
 * @start: The starting index of the subarray to be processed.
 * @seq: The size of the subarray to be processed.
 * @flow: The merge direction, UP or DOWN.
 */
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow)
{
	size_t cut = seq / 2;
	char *str = (flow == UP) ? "UP" : "DOWN";

	if (seq > 1)
	{
		printf("Merging [%lu/%lu] (%s):\n", seq, size, str);
		print_array(array + start, seq);

		bitonic_seq(array, size, start, cut, UP);
		bitonic_seq(array, size, start + cut, cut, DOWN);
		bitonic_merge(array, size, start, seq, flow);

		printf("Result [%lu/%lu] (%s):\n", seq, size, str);
		print_array(array + start, seq);
	}
}

/**
 * bitonic_sort - Sorts an array using the bitonic sort algorithm.
 *
 * This function sorts the 'array' of size 'size' using the bitonic sort
 * algorithm. If 'array' is NULL or 'size' is less than 2, no action is taken.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bitonic_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	bitonic_seq(array, size, 0, size, UP);
}
