#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: The number to be computed
 * Return: Absolute value of a number or zero
 */
int _abs(int n)
{

	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
