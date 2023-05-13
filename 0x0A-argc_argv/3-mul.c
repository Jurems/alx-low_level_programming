#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of 2 num.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives 2 arguments -0 If not -1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
