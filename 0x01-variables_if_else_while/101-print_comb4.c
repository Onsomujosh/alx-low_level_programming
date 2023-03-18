#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 56; a++)
	{
		for (b = 49; b < 57; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
