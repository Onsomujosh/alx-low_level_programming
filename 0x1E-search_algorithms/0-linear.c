#include <stdio.h>
#include "search_algos.h"

/**
*linear_search - searches for a value using the linear search algo
*@array: A pointer to an array with the search value
*@size: The number of elements in the array
*@value: The value to search for
*
*Return: Returns index or negative one
*/
int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (count < size)
	{
		printf("Value checked array[%lu] = [%d]\n", count, array[count]);
		if (array[count] == value)
		{
			return (count);
		}
		count++;
	}
	return (-1);
}
