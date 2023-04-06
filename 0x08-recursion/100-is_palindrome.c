#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - function that checks for a palindrome
 * @s: string being checked
 *
 * Return: 1 if a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, strlen(s) - 1));
}

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end) 
	{
		return (1);
	}
	if (s[start] != s[end]) 
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}	
