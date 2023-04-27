#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			putchar('');
	}

	_putchar('\n');
}
