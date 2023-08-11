#include <stdio.h>
/**
  * main - entry point
  * Description: possible combination of single numbers
  *
  * Return: always 0
  */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
