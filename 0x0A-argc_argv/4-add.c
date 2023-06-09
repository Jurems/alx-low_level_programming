#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numb.
 * @argc: The num of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If 1 of the num contains symbols that are non-digits if not -0
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
