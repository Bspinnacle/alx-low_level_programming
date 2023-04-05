#include "main.h"
/**
 * _memset - a function that fills memory with constant bytes
 * @s: address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes of the memory
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n--;
	}
	return (s);
}
