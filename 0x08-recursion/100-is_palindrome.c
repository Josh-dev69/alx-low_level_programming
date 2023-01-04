#include "main.h"
int is_palindrome_helper(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - functon that returns the palindrome result
 * @s: string parameter
 * Return: An integer value
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * _strlen_recursion - A functions that checks the length of
 * a string
 * @s: input character
 * Return: the value of the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - the function that checks if string is
 * a palindrome
 * @s: input character
 * @start: start index
 * @end: end index
 * Return: an integer value
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
