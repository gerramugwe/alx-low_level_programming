#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: input character
 *
 * Return: (1) if c is uppercase and 0 otherwise
 *
 */
int _isupper(int c)
{i
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
