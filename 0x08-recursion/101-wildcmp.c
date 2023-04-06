#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*s2 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s2 == '\0')
	{
		return ((*s1 == '\0') ? 1 : 0);
	}
	else if (*s1 == '\0')
	{
		while (*s2 == '*')
		{
			s2++;
		}
		return ((*s2 == '\0') ? 1 : 0);
	}
	else if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
