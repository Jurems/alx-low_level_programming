#include "variadic_functions.h"

/**
  * sum_them_all - Returns the sum of all its parameters.
  * @n: Num of sums to return
  *
  * Return: 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (j < n)
		{
			sum += va_arg(args, int);
			j++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
