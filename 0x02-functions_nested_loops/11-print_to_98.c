#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints numbers up to 98
 * @n: Number to be computed
 * Return: Always 0
 */

void print_to_98(int n)

{

	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
