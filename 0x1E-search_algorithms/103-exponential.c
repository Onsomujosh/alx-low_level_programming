#include <stdio.h>
#include "search_algos.h"

int binary_search1(int *array, size_t low, size_t high, int value);
/**
  *binary_search1 - performs a binary search on an array
  *@array: the array to search in points to first value
  *@low: the leftmost value of the block
  *@high: the highest value in the block
  *@value: the value to search for
  *
  *Return: Returns the search value or -1
  */
int binary_search1(int *array, size_t low, size_t high, int value)
{
	size_t mid, j;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}


/**
  *exponential_search - searches for a value
  *in a sorted array of integers
  *@size: The size of the array
  *@value: The value to search for
  *@array: A pointer to the first value of the array
  *
  *Return: return the value or -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1;
	size_t start, end;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index *= 2;
	}

	start = index / 2;
	end = (index < size) ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	return (binary_search1(array, start, end, value));
}
