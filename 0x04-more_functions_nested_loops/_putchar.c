#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: THe character to be printed
 * Return 1 if true, 0 if false
 * On error, return -1
 */
int _putchar(char c)
	{
	return (write(1, &c, 1));
	}

