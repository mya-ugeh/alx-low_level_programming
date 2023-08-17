#include <stdio.h>
#include "main.h"
/**
  * _isupper -  checks for uppercase character.
  * @c: character to be checked
  *
  * Return: 1 if uppercase, 0 if otherwise
  */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
