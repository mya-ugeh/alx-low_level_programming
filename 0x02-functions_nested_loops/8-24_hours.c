#include <stdio.h>
#include "main.h"
/**
  * jack_bauer -  prints every minute of the day of Jack Bauer
  *
  * Return: none
  */
void jack_bauer(void)
{
	char i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(':');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar('\n');
		}
	}
}
