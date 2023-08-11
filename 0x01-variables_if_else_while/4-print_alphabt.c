#include <stdio.h>
/**
  * main - Entry point
  * Description; print alphabets except e and q
  *
  * Return: always 0
  */
int main(void)
{
	char c;

	c = 'a';

	while ((c >= 'a') && (c <= 'z'))
	{
		if ((c == 'e') || (c == 'q'))
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
