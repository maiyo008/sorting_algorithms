#include <stdio.h>
#include "sort.h"

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
