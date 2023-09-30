#include "sort.h"

/**
 * swap_ints- Swaps two integers.
 *
 * @a Pointer to the first integer.
 * @b Pointer to the second integer.
 */

void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @array Pointer to the array to be sorted.
 * @size The number of elements in the array.
 *
 * Time Complexity: O(n^2)
 * - Where 'n' is the number of elements in the array.
 * - This algorithm compares and swaps adjacent elements to
 *   gradually move the largest elements to the end of the array.
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool bubbly = false;

    if (array == NULL || size < 2)
        return;

    while (bubbly == false)
    {
        bubbly = true;
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_ints(array + i, array + i + 1);
                print_array(array, size);
                bubbly = false;
            }
        }
        len--;
    }
}
