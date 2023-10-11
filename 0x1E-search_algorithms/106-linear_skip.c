#include <stdio.h>
#include "search_algos.h"
/**
  *linear_skip - searches for a value in a linked list
  *@list: pointer to the head of the skip list
  *@value: The value to search for
  *
  *Return: Returns NULL or a poiter to the first node
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;
	skiplist_t *express_lane = NULL;

	if (list == NULL)
	{
		return (NULL);
	}

	while (current && current->n < value)
	{
		express_lane = current;
		if (current->express != NULL)
		{
			current = current->express;
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		}
		else
		{
			while (current->next != NULL && current->next->n < value)
			{
				current = current->next;
				printf("Value checked at index [%lu] = [%d]\n",
						current->index, current->n);
			}
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			express_lane->index, current->index);
	while (express_lane->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				express_lane->index, express_lane->n);
		if (express_lane->n == value)
		{
			return (express_lane);
		}
		express_lane = express_lane->next;
	}
	return (NULL);
}
