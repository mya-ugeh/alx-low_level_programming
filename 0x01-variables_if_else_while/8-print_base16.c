#include <stdio.h>
/**
  * main - entry point
  * Description: prints all numbers of base 16
  *
  * Return: always 0
  */
int main(void)
{
	char h, i;

	for (h = 48; h < 58; h++)
		putchar(h);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
