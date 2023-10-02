#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: file to be read
 * @letters: the number of letters of the file to be read
 * Return: n (the actual number of letters it could read and print)
 * if file can not be opened or read, return 0
 * if filename is NULL return 0
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mall;
	ssize_t fp;
	ssize_t r;
	ssize_t n;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	return (0);

	mall = malloc(sizeof(char) * letters);
	r = read(fp, mall, letters);
	n = write(STDOUT_FILENO, mall, r);

	free(mall);
	close(fp);
	return (n);
}
