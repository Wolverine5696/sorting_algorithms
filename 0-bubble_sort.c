#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

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
	int *arrayB = malloc(n * sizeof(int));

	arrayB = array;

	for (x = 1; x < n; x++)
	{
		for (y = 0; y < n - 1; y++)
		{
			if (arrayB[y] > arrayB[y + 1])
			{
				temp = arrayB[y];
				arrayB[y] = arrayB[y + 1];
				arrayB[y + 1] = temp;
				print_array(arrayB, n);
			}

		}
	}
}
