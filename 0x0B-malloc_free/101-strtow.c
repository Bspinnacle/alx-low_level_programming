#include <stdlib.h>
#include "main.h"
/**
 * count_word - a function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{

	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
	if (s[b] == ' ')
	a = 0;
	else if (a == 0)
	{
	a = 1;
	c++;
	}
	}
	return (c);
}

/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **tab, *n;
	int a, b = 0, c = 0, w, p = 0, q, r;

	while (*(str + c))
	c++;
	w = count_word(str);

	if (w == 0)
	return (NULL);
	tab = (char **) malloc(sizeof(char *) * (w + 1));
	if (tab == NULL)
	return (NULL);
		for (a = 0; a <= c; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
		if (p)
		{
		r = a;
		n = (char *) malloc(sizeof(char) * (p + 1));
		if (n == NULL)
		return (NULL);
		while (q < r)
		*n++ = str[q++];
		*n = '\0';
		tab[b] = n - p;
		b++;
		p = 0;
		}
		}
	else if (p++ == 0)
	q = a;
	}
	tab[b] = NULL;
	return (tab);
}
