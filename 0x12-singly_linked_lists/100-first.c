#include <stdio.h>
#include <stdlib.h>

void print_before(void) __attribute__ ((constructor));

/**
 *  print_before - a function that prints You're beat! and yet, you
 *  must allow,\nI bore my house upon my back!\n before
 *  the main function is executed
 *
 * Return: Always 0
 */

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
