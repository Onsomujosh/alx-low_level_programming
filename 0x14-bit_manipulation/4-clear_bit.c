#include "main.h"

/**
 * clear_bit - sets value of bit at given index to 0
 * @n: pointer to value to be manipulated
 * @index: index to be manipulated
 * Return: 1 success, -1 failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	num = -(1ul << index);
	*n = *n & num;
	return (1);
}
