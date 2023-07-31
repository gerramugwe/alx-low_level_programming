#include "main.h"

/**
 *_strchr -  function that locates a character in a string
 *@s: Pointer to the input string.
 *@c: The character to be located.
 *
 *Return: Pointer to the first occurrence of c in s, or NULL if not found.
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;

	}
	return (s + 1);
	return (NULL);
}
