#include "main.h"

/**
 * main - checks for alphabetic character
 * whether lower or upper case
 *
 * Return: 1(letters) 0(others)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}	
