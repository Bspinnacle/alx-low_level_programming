#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: input string
 * Return: reverse string
 */

void rev_string(char *s)

{
	char r = s[0];
	int a = 0;
	int b;

	while (s[a] != '\0')
	a++;
	for (b = 0; b < a; b++)
	{
	a--;
	r = s[b];
	s[b] = s[a];
	s[a] = r;
	}
}
