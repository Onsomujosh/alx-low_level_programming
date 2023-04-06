#include "main.h"

int _sqrt_helper(int n, int i)

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return _sqrt_helper(n, 0);
}

/**
 * _sqrt_helper - finds the natural square root of a number recursively
 * @n: number to calculate
 * @i: iteration
 *Return: result
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_helper(n, i + 1));
}
