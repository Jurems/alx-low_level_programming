#include "main.h"
#include <stdlib.h>

/**
* create_array - Function that creates an array of char &
* initializes it with a specific char
* @size: the size of the array
* @c: the char to create the array for
* Return: Pointer to the array or 0 if malloc fails
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
