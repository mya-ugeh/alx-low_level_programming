#include <stdio.h>
#include "main.h"
/**
  * print_diagonal - draws diagonal line on terminal
  * @n: number of times \ is printed
  * Return: void
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	for (j = 0; j < n; j++)
	{
			_putchar('\\');
			_putchar('\n');
	}
}
