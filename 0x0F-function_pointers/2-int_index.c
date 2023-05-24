#include "function_pointers.h"

/**
  * int_index - func that searches for an integer.
  * @array: Num of elements in the array
  * @size: Size of the array
  * @cmp: Func doesn't return 0
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
