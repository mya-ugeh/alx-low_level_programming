#include <stdio.h>
#include "main.h"
/**
  * _isdigit - checks for a digit (0 through 9).
  * @c: character
  *
  * Return: 1 if c is digit, 0 if otherwise
  */
int _isdigit(int c)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
