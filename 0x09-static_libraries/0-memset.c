#include "main.h"

/**
 * _memset - function that fills the first n bytes of
 * the memory area pointed to by s with the constant byte b
 * @s: address of memory aread to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
