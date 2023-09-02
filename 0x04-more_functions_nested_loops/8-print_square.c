#include <stdio.h>
#include "main.h"
/**
  * print_square - prints a square
  * @size: size of square
  *
  * Return: void
  */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
