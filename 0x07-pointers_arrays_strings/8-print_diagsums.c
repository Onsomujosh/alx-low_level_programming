#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, s;

	sum1 = 0;
	sum2 = 0;

	for (s = 0; s < size; s++)
	{
		sum1 = sum1 + a[s * size + s];
	}

	for (s = size - 1; s >= 0; s--)
	{
		sum2 += a[s * size + (size - s - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
