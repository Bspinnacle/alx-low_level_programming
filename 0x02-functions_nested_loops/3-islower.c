#include "main.h"

/**
 * _islower - A program that checks if alphabets is lowercase
 * @c: character to be checked
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
