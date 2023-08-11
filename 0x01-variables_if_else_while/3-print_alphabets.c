#include <stdio.h>
/**
* main - Entry code
* Description: Print out alphabet characters
* Return: always 0
*/
int main(void)
{
	char a;

	char b;

	for (a = 97; a < 123; a++)
		putchar(a);
	for (b = 65; b < 91; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
