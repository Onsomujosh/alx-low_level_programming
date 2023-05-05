#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: pointer to the number
 * @index: index to manipulate
 * Return: 1 success and -1 failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8 - 1))
	{
		return (-1);
	}
	*n = *n | 1lu << index;
	{
		return (1);
	}
}
