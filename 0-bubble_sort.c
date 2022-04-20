i#include <stdio.h>
#include "sort.h"
#include <stdlib>

/**
 * bubble_sort - array that sorts int by swaping positions
 * @array: array of integer
 * @size: size of the array
 * int array [] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	size_t n = size;
	int temp = 0;
	int *array = malloc(n * sizeof(int));

	array = array;

	for (x = 1; x < n; x++)
	{
		for (y = 0; y < n - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, n);
			}

		}
	}
}
