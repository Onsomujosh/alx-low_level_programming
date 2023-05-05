#include "main.h"

/**
 * get_bit - returns value of bit at an index
 * @n: the number to check
 * @index: index to check
 * Return: return value of bit Or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > (sizeof(unsigned int) * 8) - 1)
	{
		return (-1);
	}
	x = (n >> index) & 1;
	{
		return (x);
	}
}
