#include <stdio.h>
#include "search_algos.h"

int recursive_advanced_binary(int *array, size_t low, size_t high, int value);
/**
  *recursive_advanced_binary - uses recursion to search
  *@array: a pointer to the first element in the array
  *@low: starting point
  *@high: end point
  *@value: value to search for
  *
  *Return: the value or -1
  */
int recursive_advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
			{
				return (mid);
			}
			else
			{
				return (recursive_advanced_binary(array, low, mid - 1, value));
			}
		}
		else if (array[mid] < value)
		{
			return (recursive_advanced_binary(array, mid + 1, high, value));
		}
		else
		{
			return (recursive_advanced_binary(array, low, mid - 1, value));
		}
	}
	return (-1);
}

/**
  *advanced_binary - an advanced binary search
  *sorts the index when there similar values
  *@array: a pointer to the first element of the array
  *@size: number of elements in the array
  *@value: the value to search for
  *
  *Return: returns the value or -1
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	return (recursive_advanced_binary(array, 0, size - 1, value));
}
