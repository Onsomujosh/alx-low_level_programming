#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char **strtow(char *str);

/**
 * my_program - calls strtow
 *
 * Return: 0(Success), 1(fail)
 */
int my_program(void)
{
	int i;

	char **words = strtow("Hello world! This is a test.");

	if (words == NULL)
	{
		printf("strtow failed.\n");
		return (1);
	}
	i = 0;

	while (words[i] != NULL)
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of string(Success)
 * or NULL(Error)
 */
char **strtow(char *str)
{
	int len, num_words, i, word_count, start;
	char **word_list;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	len = strlen(str);
	num_words = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			num_words++;
		}
	}
	if (num_words == 0)
	{
		return (NULL);
	}

	word_list = malloc(sizeof(char *) * (num_words + 1));

	if (word_list == NULL)
	{
		return (NULL);
	}

	word_count = 0;
	start = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		if (i == 0 || str[i - 1] == ' ')
		{
			start = i;
		}
		if (i == len - 1 || str[i + 1] == ' ')
		{
			int end = i;
			int word_len = end - start + 1;
			char *word = malloc(sizeof(char) * (word_len + 1));
			int j;

			if (word == NULL)
			{
				for (j = 0; j < word_count; j++)
				{
					free(word_list[j]);
				}
				free(word_list);
				return (NULL);
			}
			strncpy(word, str + start, word_len);
			word[word_len] = '\0';
			word_list[word_count++] = word;
		}
	}
	word_list[num_words] = NULL;
	return (word_list);
}
