#include "main.h"

/**
 * _puts - Prints a string to standard output.
 * @str: The string to be printed.
 * Return 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
