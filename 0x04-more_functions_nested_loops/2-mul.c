#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A program that checks for uppercase character
 * @c: character to be checked
 * Return: 1 if c is uppercase,0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
