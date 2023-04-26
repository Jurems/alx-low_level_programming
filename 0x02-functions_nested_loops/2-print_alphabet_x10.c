#include "main.h"


/**
 * main -This function  print alphabet in lower case x10
 * Return: void
 */

void print_alphabet_x10()

{

	char c;
	int i = 0;
	while (i <= 9)
{
	for (c = 'a'; c <= 'z'; c++)
{
		_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
