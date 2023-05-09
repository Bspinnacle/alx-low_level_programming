#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file -  a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fp, n, length;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (length = 0; text_content[length];)
		length++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fp, text_content, length);

	if (fp == -1)
		return (-1);

	if (n == -1)
		return (-1);

	close(fp);

	return (1);

}
