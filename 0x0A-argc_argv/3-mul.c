#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
	int i, p, q, a, b, d;

	i = 0;
	p = 0;
	q = 0;
	a = 0;
	b = 0;
	d = 0;

	while (s[a] != '\0')
	a++;

	while (i < a && b == 0)
	{
	if (s[i] == '-')
	++p;
	if (s[i] >= '0' && s[i] <= '9')
	{
	d = s[i] - '0';
	if (p % 2)
	d = -d;
	q = q * 10 + d;
	b = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
	b = 0;
	}
	i++;
	}
	if (b == 0)
	return (0);
	return (q);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])

{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
