#include "main.h"

int actual_sqrt_recursion(int n, int r);
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: number whose square root is to be calculated
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - a function to find the
 * natural square root of a number
 * @n: number whose square root is to be calculated
 * @r: input
 * Return: the natural square root
 */

int actual_sqrt_recursion(int n, int r)
{
	if (r * r > n)
	return (-1);
	if (r * r == n)
	return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
