#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 * a-4, A-4, e-3, E-3, o-0, O-0, t-7, T-7, l-1, L-1
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (n[i] == s1[j])
	{
	n[i] = s2[j];
	}
	}
	}
	return (n);
}
