#include "main.h"
/**
 * print_alphabet - Print the alphabet in lower case
 * @c:The chracter to be printed
 * Return 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
