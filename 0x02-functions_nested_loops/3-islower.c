#include "main.h"

/**
 * int _islower(int c) - A program that prints only when alphabets is lowercase
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
