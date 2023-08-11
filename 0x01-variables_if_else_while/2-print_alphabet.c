#include <stdio.h>
/**
  * main - Entry code
  * Description: Prit out alphabet characters
  * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 97; c < 123; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
