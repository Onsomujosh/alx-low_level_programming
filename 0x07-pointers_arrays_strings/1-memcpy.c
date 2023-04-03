#include "main.h"

/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest
 * @dest: receiving memory area
 * @src: sending memory area
 * @n: number of bytes copied
 *
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
