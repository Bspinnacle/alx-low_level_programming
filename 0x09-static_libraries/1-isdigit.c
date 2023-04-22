#include "main.h"

/**
 * _isdigit - It checks if a digit is between 0 to 9
 * @c: input number
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
