#include "main.h"
/**
 * _memset - Fill memory with a constant byte.
 * @s: Address of memory to be filled.
 * @b: The desired value
 * @n: number of bytes to be changed
 *
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
