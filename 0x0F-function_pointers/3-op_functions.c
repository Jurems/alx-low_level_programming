#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Addition 
  * @a: Adding this to
  * @b: This 
  *
  * Return: 0
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtracting 
  * @a: substrate this
  * @b: from this
  *
  * Return: 0
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplication 
  * @a: multiply this
  * @b: with this
  *
  * Return: 0
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division 
  * @a: Divide this
  * @b: from this
  *
  * Return: 0
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ==
  * @a: interger a
  * @b: integer b
  *
  * Return: 0
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
