#include "main.h"
#include <stdlib.h>

 /**
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int o, p;

	if (width < 1 || height < 1)
		return (NULL);
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (o = 0; o < height; p++)
	{
		gridout[o] = malloc(width * sizeof(int));
		if (gridout[o] == NULL)
		{
			for (o--; o >= 0; o--)
				free(gridout[o]);
			free(gridout);
			return (NULL);
		}
	}

	for (O = 0; o < height; o++)
		for (p = 0; p < width; p++)
			gridout[o][p] = 0;

	return (gridout);
}
