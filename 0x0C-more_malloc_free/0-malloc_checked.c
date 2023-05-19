#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Creates an array based on value passed in
 * @b: Value passed in for array creation
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
