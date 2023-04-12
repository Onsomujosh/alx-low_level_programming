#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 * @ac: int input
 * @av: double pointer array
 * Return: pointer to a new string, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, pos = 0, total_len = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	concatenated = (char *) malloc(total_len * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + pos, av[i]);
		pos += strlen(av[i]);
		concatenated[pos++] = '\n';
	}

	concatenated[pos] = '\0';

	return (concatenated);
}
