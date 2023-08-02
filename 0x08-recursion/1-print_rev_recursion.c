#include "main.h"

/**
  * _print_rev_recursion - Print a string followed by a new line
  * @s: the string to print
  *
  * Return: Nothing.
  */
_print_rev_recursion
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	s++;

	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
