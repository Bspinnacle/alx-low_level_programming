#include "main.h"

/**
 * _isalpha - A program that checks if it is alphabet
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase 0 if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && 90))
	{
	return (1);
	}
	return (0);
}
