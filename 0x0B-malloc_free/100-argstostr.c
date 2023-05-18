#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: the number of arguments to the program
* @av: the arguments to the program
* Return: returns a pointer to the concatenated string
*/
char *argstostr(int ac, char **av)
{
	int i, c, p;
	char *str;
	int u = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Counts the length of char in the argument */
	for (i = 0; i < ac; i++)
	{
		for (c = 0; 1 ; c++)
		{
			u++;
			if (av[i][c] == '\0')
				break;
		}
	}
	c += 1;
	str = (char *) malloc(c);
	if (str == NULL)
		return (NULL);

	p = 0;
	/* Concatenates all argument to the string str */
	for (i = 0; i < ac; i++)
	{
		for (c = 0; 1 ; c++)
		{
			str[p] = av[i][c];
			p++;

			if (av[i][c] == '\0')
			{
				str[p - 1] = '\n';
				break;
			}
		}
	}
	str[p] = '\0';

	return (str);
}
