#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1:first string
 * @s2:second string
 * @n: number of bytes from s2 concatenated to s1
 *
 * Return: pointer to the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, i, j;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (!result)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n && s2[j]; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
