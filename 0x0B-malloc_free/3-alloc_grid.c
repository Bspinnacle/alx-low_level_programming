#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array, null on failure
 */

int **alloc_grid(int width, int height)

{
	int **i;
	int w, h;

	if (width <= 0 || height <= 0)
	return (NULL);
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	return (NULL);
	for (w = 0; w < height; w++)
	{
	i[w] = malloc(sizeof(int) * width);
	if (i[w] == NULL)
		{
	for (; w >= 0; w--)
	free(w[i]);
	free(i);
	return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
	for (h = 0; h < width; h++)
	i[w][h] = 0;
	}
	return (i);
}
