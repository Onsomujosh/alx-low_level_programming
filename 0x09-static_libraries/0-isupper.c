#include "main.h"

/**
 * _isupper - checks for uppercase letters
 *
 *@c: character being checked
 *
 * Return: 1(if uppercase) 0(if lowercase)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
