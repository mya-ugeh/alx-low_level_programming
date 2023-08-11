#include <stdio.h>
/**
  * main -  Entry point
  * Description: print single digit number
  *
  * Return: always 0
  */
int main(void)
{
	char n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
