#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - Entry code
  * Description: prints the alphabet, in lowercase, followed by a new line.
  *
  * Return: always 0
  */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
}
