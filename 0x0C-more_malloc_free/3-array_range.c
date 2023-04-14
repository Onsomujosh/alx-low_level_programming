#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: pointer to a new array
 */
int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = (int *) malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
