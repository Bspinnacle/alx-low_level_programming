#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: First argument to be swapped
 * @b: second argument to be swapped
 * Return: void
 */

void swap_int (int *a, int *b)
{

	int p;

	p = *a;
	*a = *b;
	*b = p;

}