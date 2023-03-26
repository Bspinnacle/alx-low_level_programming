#include <stdio.h>

/**
 * main - A program that prints the numbers from 1 to 100
 * for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * For numbers which are multiples of both three and five prints FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	{
	printf(" FizzBuzz");
	}
	else if (n % 3 == 0)
	{
	printf(" Fizz");
	}
	else if (n % 5 == 0)
	{
	printf(" Buzz");
	}
	else
	{
	printf(" %d", n);
	}
	}
	printf("\n");
	return (0);
}
