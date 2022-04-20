#include "sort.h"


int partition(int *array, int low, int high, int size);
void swap_Array(int *array, size_t x, size_t y);
void modifyQuickSort(int *arr, int low, int high, int size);


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
	int temp;

	temp = array[x];
	array[x] = array[y];
	array[y] = temp;
}

/**
 * quick_sort - Algorithm Quick Sort
 *
 * @array: Pointer that point to an array
 * @size: The size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	modifyQuickSort(array, 0, size - 1, size);
}

/**
 * partition - Function that implements the Lomuto Partition
 * @arr: Pointer that point to an array
 * @low: The minimum number in the index
 * @high: The maximum number in the index
 * @size: The size of the array
 *
 * Return: The number of the partition
 */

int partition(int *arr, int low, int high, int size)
{
	int pivot = arr[high];
	int x, y = (low  - 1);

	for (x = low ; x <= high; x++)
	{
		if (arr[x] <= pivot)
		{
			y++;
			if (y != x)
			{
				swap_Array(arr, y, x);
				print_array(arr, size);
			}
		}
	}
	return (y);
}

/**
 * modifyQuickSort - Algorithm Quick Sort
 *
 * @arr: Pointer that point to an array
 * @low: The minimum index
 * @high: The maximum index
 * @size: The size of the array
 *
 */
void modifyQuickSort(int *arr, int low, int high, int size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		modifyQuickSort(arr, low, pi - 1, size);
		modifyQuickSort(arr, pi + 1, high, size);
	}
}
