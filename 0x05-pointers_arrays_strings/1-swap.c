#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
