#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - Prints numbers
  * @n: Numbers to print
  *
  * Return: If separator is NULL, don’t print it
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (j < n)
		{
			printf("%d", va_arg(args, int));

			if (j != n - 1  && separator != NULL)
				printf("%s", separator);

			j++;
		}
		va_end(args);
	}
	printf("\n");
}
