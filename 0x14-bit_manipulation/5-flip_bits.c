#include "main.h"

/**
 * flip_bits - returns number of bit to flip
 * @n: first int
 * @m: int to move to
 * Return: returns number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int count = 0;

	d = n ^ m;

	while (d)
	{
		if (d & 1)
		{
			count++;
		}
		d = d >> 1;
	}
	return (count);
}
