#include "main.h"

/**
 * print_number - function that prints an integer.
 *@n: inger to be printed
 *
 * Return: integer value of n
 *
 */
void print_number(int n)
{
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
