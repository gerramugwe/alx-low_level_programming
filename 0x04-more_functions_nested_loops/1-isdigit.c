#include "main.h"

/**
 *_isdigit - checks if a parameter is a digit
 *
 * @c: input character
 *
 * return (1) if is digit othersiwe (1)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
