#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
	printf("%s\n", argv[n]);
	}
	return (0);
}
