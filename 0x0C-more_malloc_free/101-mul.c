#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/* Function declarations */
int is_digit(char *s);
int _strlen(char *s);
void errors(void);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		printf("%s\n", ERR_MSG);
		exit(98);
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	result = (int *)malloc(sizeof(int) * len);
	if (!result)
	{
		printf("%s\n", ERR_MSG);
		return (1);
	}

	for (i = 0; i <= len1 + len2; i++)
	{
		result[i] = 0;
	}

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		{
			result[len1 + len2 + 1] += carry;
		}
	}

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
		{
			a = 1;
		}
		if (a)
		{
			printf("%d", result[i]);
		}
	}

	if (!a)
	{
		printf("0");
	}

	printf("\n");

	free(result);

	return (0);
}

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string being checked
 *
 * Return: 0(if non-digit), 1(digit)
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to checks
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}
