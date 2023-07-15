#include <stdio.h>

/**
 * main - prints the lowercase alphabets
 *
 * Return always 0 (Sucess)
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
