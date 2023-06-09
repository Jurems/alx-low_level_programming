#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Func that creates an array with min and max values
 * @min: The lower value of array
 * @max: The upper value of array
 * Return: Pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
