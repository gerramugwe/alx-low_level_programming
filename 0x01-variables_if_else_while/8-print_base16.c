#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Retur: 0 (succes)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

