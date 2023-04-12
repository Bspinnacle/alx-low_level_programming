#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: input
 * @av: double pointer array
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)

{
	int i, n, a = 0, b = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		b++;
	}
	b += ac;
	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[a] = av[i][n];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
