#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - Prints strings
  * @separator: If separator is NULL, don’t print
  * @n: num of strings passed to the func
  *
  * Return: print nil
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (j < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (j != n - 1 && separator != NULL)
				printf("%s", separator);

			j++;
		}

		va_end(args);
	}

	printf("\n");
}
