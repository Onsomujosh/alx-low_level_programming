#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to string of 0s and 1s
 * Return: converted number of null
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		num = num * 2 + (b[i] - '0');
		i++;
	}
	return (num);
}
