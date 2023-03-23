#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_h1, fib1_h2, fib2_h1, fib2_h2;
	unsigned long h1, h2;

	for (counter = 0; counter < 92; counter++)
	{
	sum = fib1 + fib2;
	printf("%lu ", sum);
	fib1 = fib2;
	fib2 = sum;
	}
	fib1_h1 = fib1 / 10000000000;
	fib1_h2 = fib1 % 10000000000;
	fib2_h1 = fib2 / 10000000000;
	fib2_h2 = fib2 % 10000000000;
	for (counter = 93; counter < 99; counter++)
	{
	h1 = fib1_h1 + fib2_h1;
	h2 = fib1_h2 + fib2_h2;
	if (fib1_h2 + fib2_h2 > 9999999999)
	{
	h1 += 1;
	h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
	if (counter != 98)
	printf(", ");
	fib1_h1 = fib2_h1;
	fib1_h2 = fib2_h2;
	fib2_h1 = h1;
	fib2_h2 = h2;
	}
	printf("\n");
	return (0);

}
