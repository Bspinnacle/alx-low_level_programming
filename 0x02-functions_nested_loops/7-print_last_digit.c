#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: The number to be checked
 * Return: The last digit of a number
 */

int print_last_digit(int n)

{

	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
	lastdigit =  lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
