#include <stdio.h>

/**
 * main - alphabet in lowercase and then uppercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
