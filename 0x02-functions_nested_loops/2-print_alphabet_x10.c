#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - Entry code
  * Description: prints 10 times the alphabet in lowercase
  *
  */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}
