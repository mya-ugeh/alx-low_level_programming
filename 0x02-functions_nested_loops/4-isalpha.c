#include <stdio.h>
#include "main.h"
/**
  * _isalpha -  checks for alphabetic character.
  * @c: character to be checked
  *
  * Return: 1 if c is a letter, 0 if otherwise
  */
int _isalpha(int c)
{
	char i;
	char j;

	for (i = 65; i <= 90; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if ((c == i) || (c == j))
				return (1);
		}
	}
	return (0);
}
