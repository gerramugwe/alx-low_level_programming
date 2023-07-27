#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int j;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[srclen] != '\0')
	{
		srclen++;
	}
	j = 0;

	while (j <= srclen)
	{
		dest[destlen + j] = src[j];
		j++;
	}

	return (dest);
}
