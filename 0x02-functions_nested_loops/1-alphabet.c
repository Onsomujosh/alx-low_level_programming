#include "main.h"

/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0(Success)
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz"
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
		_putchar('\n');
	}
	return (0);
}
