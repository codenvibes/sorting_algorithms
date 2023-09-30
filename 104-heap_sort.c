#include "sort.h"

/*
 * Auth: codenvibes
 */

void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

/**
 * swap_ints - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers pointed to by 'a' and 'b'.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * max_heapify - Maintains the max heap property of a subtree.
 * @array: The array to be sorted as a max heap.
 * @size: The total number of elements in the array.
 * @base: The size of the base array (used for boundary checks).
 * @root: The index of the current root node in the heap.
 *
 * This function adjusts the position of the root node in a max heap
 * to maintain the max heap property.
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;

	left = 2 * root + 1;
	right = 2 * root + 2;
	large = root;

	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;

	if (large != root)
	{
		swap_ints(array + root, array + large);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}

/**
 * heap_sort - Sorts an array using the heap sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 *
 * This function sorts an array of integers using the heap sort algorithm.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	/* Build a max heap */
	for (i = (size / 2) - 1; i >= 0; i--)
		max_heapify(array, size, size, i);

	/* Extract elements one by one from the heap */
	for (i = size - 1; i > 0; i--)
	{
		swap_ints(array, array + i);
		print_array(array, size);
		max_heapify(array, size, i, 0);
	}
}
