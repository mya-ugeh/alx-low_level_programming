#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k >=10)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
