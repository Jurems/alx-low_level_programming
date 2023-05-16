#include "main.h"
#include <stdlib.h>

/**
* create_array - Func  that creates an array of characters &
* initializes it with a specific char
* @size: the size of the array
* @c: the character to create the array for
* Returns: Pointer to arrays & 0 if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int J;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (J = 0; J < size; J++)
	{
		arr [J] = c;
	}
	return (arr);
}
