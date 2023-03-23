#include "main.h"
#include <stdio.h>
/**
 * main - a program 5that prints the sum of all multiples of 3 or 5 below 1024
 * Return: Always successful
 */

int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	b += a;
	}
	a++;
	}
	printf("%d\n", b);
	return (0);

}
