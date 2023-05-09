#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, length, n = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (length = 0; text_content[length];)
		length++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	n = write(fp, text_content, length);

	if (fp == -1)
		return (-1);
	if (n == -1)
		return (-1);

	close(fp);
	return (1);

}
