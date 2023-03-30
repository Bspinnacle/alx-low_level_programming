#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes a string using rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (s[a] == ch[b])
	{
	s[a] = rot[b];
	break;
	}
	}
	}
	return (s);
}
