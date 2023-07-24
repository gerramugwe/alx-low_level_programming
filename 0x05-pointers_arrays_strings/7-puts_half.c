#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	char *start = str;
	char *end = str;
	int length = 0;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	end = str + length;

	if (length % 2 == 1)
	{
		start += (length - 1) / 2;
	}

	else
	{
		start += length / 2;
	}

	while (start < end)
	{
		_putchar(*start);
		start++;
	}

	_putchar('\n');
}
