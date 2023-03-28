#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int leng = 0;
	int i = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		leng++;
	}
	i = leng - 1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
