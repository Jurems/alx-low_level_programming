#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates an array memory for an array
 * @nmemb: Num of array elements
 * @size: Size of each element, in bytes
 * Return: pointer to first index of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
