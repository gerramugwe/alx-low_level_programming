#include <stdio.h>

/**
 * main - prints the lowercase alphabets without e and q
 *
 * Return; always 0 (Sucess)
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar ('\n');
	return (0);
}
