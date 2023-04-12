#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer to newly allocated space
 * @str: parameter being checked
 * Return: 0(Success), NULL if insufficient
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	copy = (char *)malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	memcpy(copy, str, len + 1);
	return (copy);
}
