#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *alloc_bytes(char *filename);
/**
 * alloc_bytes -  a function that allocates 1024 bytes to a buffer
 * @filename: the name of the file
 *
 * Return: pointer to buffer
 */

char *alloc_bytes(char *filename)
{
	char *bytes;

	bytes = malloc(sizeof(char) * 1024);
	if (bytes == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (bytes);
}

void close_descr(int fd);
/**
 * close_descr - a function that closes file descriptor
 * @fd: file descriptor to be closed
 *
 * Return: no return
 */

void close_descr(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,  "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of given arguments
 * @argv: array of pointers to arguments
 *
 * Return: Alway 0 (success)
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bytes = alloc_bytes(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bytes, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(bytes);
		exit(98);
	}

	w = write(to, bytes, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(bytes);
		exit(99);
	}
	r = read(from, bytes, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0);

	free(bytes);
	close_descr(from);
	close_descr(to);

	return (0);
}
