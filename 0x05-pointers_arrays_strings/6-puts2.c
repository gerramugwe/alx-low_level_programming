#include "main.h"

/**
 *puts2 - Prints every other character of a strin
 * @str: Pointer to the input string
 *
 */
void puts2(char *str)
{
	int i;

	i=0;
	while (*str[i] != '\0')
	{
		_putchar(*str[i]);
		str += 2;
	}

	_putchar('\n');
}
