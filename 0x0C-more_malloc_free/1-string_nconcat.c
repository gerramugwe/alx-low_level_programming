#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;

	new_string = malloc(strlen(s1) + n + 1);
	strcpy(new_string, s1);
	strncat(new_string, s2, n);
	new_string[strlen(new_string)] = '\0';
	return (new_string);
}
