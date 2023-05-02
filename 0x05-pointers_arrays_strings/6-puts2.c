#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.Return 0
 */
void puts2(char *str)
{
	int j;
int w = 0;
	while (str[w++])
		w++;

	for (j = 0; j < w; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
