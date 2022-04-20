#include "sort.h"

void swap_Array(int *array, size_t x, size_t y);
/**
 * selection_sort -  sorts an array of integers in ascending order using the
 *                   Selection sort algorithmi
 *
 * @array: Pointer that point to an array
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t x, y, red;

	for (x = 0; x < size; x + 1)
	{
		red = x;
		for (y = x + 1; y < size; y + 1)
		{
			if (array[red] > array[y])
				red = y;
		}
		if (array[x] > array[red] && x < size - 1)
		{
			swap_Array(array, x, red);
			print_array(array, size);
		}
	}
}

/**
 * swap_Array - Swap two elements in an array
 *
 * @array: Pointer that point to an array
 * @x: This is the index to swap with the index x
 * @y: This is the index to swap with the index y
 *
 */
void swap_Array(int *array, size_t x, size_t y)
{
	int blue;

	blue = array[x];
	array[x] = array[y];
	array[y] = blue;
}
