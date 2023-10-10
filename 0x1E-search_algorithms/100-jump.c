#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
  *jump_search - searches for a value in a sorted
  *	array of integers using the Jump search algorithm
  *@array: a pointer to the first element of the array
  *@size: the num of elements in the array
  *@value: the value to search for
  *
  *Return: returns -1 or the position of the value
  */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[prev] < value)
	{
		prev += step;
		if (prev >= size)
		{
			printf("Value checked array[%ld] = [%d]\n",
				prev - step, array[prev - step]);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", prev - step, array[prev - step]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);
	for (i = prev - step; i <= size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
