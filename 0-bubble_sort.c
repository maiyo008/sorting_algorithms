#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Function to bubble sort an array
 * @array: The array to be bubble sorted
 * @size: Size of the array to be bubble sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap_indicator = 1;

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_indicator = swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		if (swap_indicator != 0)
			return;
	}
}

/*
 * swap - Function to swap any two integers
 * @a: First integer
 * @b: Second integer
 * Return: 0 when the execution is complete
 */
int swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
