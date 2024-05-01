#include "sort.h"

/**
 * swap_values - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_values(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap_interval, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap_interval = 1; gap_interval < (size / 3);)
		gap_interval = gap_interval * 3 + 1;

	for (; gap_interval >= 1; gap_interval /= 3)
	{
		for (i = gap_interval; i < size; i++)
		{
			j = i;
			while (j >= gap_interval && array[j - gap_interval] > array[j])
			{
				swap_values(array + j, array + (j - gap_interval));
				j -= gap_interval;
			}
		}
		print_array(array, size);
	}
}
