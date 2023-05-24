#include "function_pointers.h"

/**
  * array_iterator - Executes a func given as a parameta of an array.
  * @array: Element of an array
  * @size: Size of the array
  * @action: Pointer to the func i used
  *
  * Return: 0
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
