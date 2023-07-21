#include "main.h"

/**
 *more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * return: 0
 */
void more_numbers(void)
{
	int k;
	int m;

	for (k = 0; k < 10; ++k)
	{
			for (m =0; m <=14; m++)
			{
				if (m > 9)
				{
					_putchar((y / 10) + '0');
				}

				_putchar(( y % 10) + '0');
			}

			_putchar('\n');
	}
}
