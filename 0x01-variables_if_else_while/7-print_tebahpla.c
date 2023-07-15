#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kh;

	for (kh = 'z'; kh >= 'a'; kh--)
	{
		putchar(kh);
	}
	putchar('\n');
	return (0);
}

