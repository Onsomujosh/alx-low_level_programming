#include <stdio.h>
#include "main.h"

int _atoi(char *s);

/**
 * main - calls _atoi
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: converted integers
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string being converted
 * Return: result
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			return (0);
		}
		s++;
	}

	return (result * sign);
}
