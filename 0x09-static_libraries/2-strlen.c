#include "main.h"

/**
 *_strlen - A program that finds the length of a string.
 *@s: String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

int _strlen(char *s)

{

	int a = 0;

	while (*s  != '\0')

	{
	a++;
	s++;
	}

	return (a);

}
