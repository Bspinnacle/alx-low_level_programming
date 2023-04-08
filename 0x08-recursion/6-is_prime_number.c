#include "main.h"

int actual_prime(int n, int r);
/**
 * is_prime_number - prime number function
 * @n: input
 * Return: 1  if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - A function for prime number
 * @n: input
 * @r: input
 * Return: 1  if the input integer is a prime number, otherwise 0
 */

int actual_prime(int n, int r)
{
	if (r == 1)
	return (1);
	if (n % r == 0 && r > 0)
	return (0);
	return (actual_prime(n, r - 1));
}
