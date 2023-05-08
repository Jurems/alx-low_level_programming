#include "main.h"
/**
 *_memcpy - Copy memory area.
 *@src: memory where is copied
*@dest: memory where is stored
 *@n: number of bytes
 *
 *Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
