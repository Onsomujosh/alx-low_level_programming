#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - function that checks for prime numbers
 * @n: input number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, n - 1));
	}
}

/**
 * is_prime_helper - recursively calculates for prime numbers
 * @n: input number
 * @i: iteration
 * Return:1 if prime, 0 if not
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i - 1));
	}
}
