#include "sort.h"
#include <stdio.h>
/**
 * _swap - swaps two values.
 * @array: the array for swap him values.
 * @x: 1st index
 * @y: 2nd index
 * Return: Nothing
 */
void _swap(int *array, int x, int y)
{
	int tmp;

	if (array[x] != array[y])
	{
		tmp = array[x];
		array[x] = array[y];
		array[y] = tmp;
	}
}

/**
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 0,  x, y;

	if (size < 2)
		return;

	while (h <= size / 3)
		h = h * 3 + 1;

	while (h >= 1)
	{
		for (x = h; x < size; x++)
			for (y = x; y >= h && array[y] < array[y - h]; y -= h)
				_swap(array, j, j - h);
		h /= 3;
		print_array(array, size);
	}
}
