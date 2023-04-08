#include "main.h"

int is_palindrome(char *s);
int check_pal(char *s, int r, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that checks for a palindrome string
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - a function that checks the characters recursively for palindrome
 * @s: input string
 * @r: iterator
 * @l: length of the string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int check_pal(char *s, int r, int l)
{
	if (*(s + r) != *(s + l - 1))
	return (0);
	if (r >= l)
	return (1);
	return (check_pal(s, r + 1, l - 1));
}
