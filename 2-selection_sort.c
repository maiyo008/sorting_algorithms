#include <stdio.h>
#include "sort.h"
void swap_(int *a, int *b);

/**
 * selection_sort - The function to perfom selection sort
 * @array: The array to be sorted
 * @size: The size of the array to be sorted
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t j_min;

	for (i = 0; i < size; i++)
	{
		j_min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[j_min])
				j_min = j;
		if (j_min != i)
		{
			swap_(&array[i], &array[j_min]);
			print_array(array, size);
		}
	}
}

/**
 * swap - Function to swap any two integers\
 * @a: First integer
 * @b: Second integer
 * Return: Nothing
 */
void swap_(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
