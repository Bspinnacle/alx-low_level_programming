#include <stdio.h>

/**
 * main -  a program that finds and prints the largest prime factor of the number
 * @pf: prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
	if (n % pf == 0)
	{
	n /= pf;
	pf--;
	}

	}
	printf("%ld\n", pf);
	return (0);
}
