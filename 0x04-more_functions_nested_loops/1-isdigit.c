#include "main.h"

/**
 * _isdigit - checks for a digit ( 0 through 9)
 *
 *@c: digit being checked
 *
 *Return: 1(if within range) 0(if not within range)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
