#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: The number for which factorial is to be calculated
 *
 * Return: Factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
