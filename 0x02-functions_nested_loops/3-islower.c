#include <stdio.h>
#include "main.h"
/**
  * _islower(int c) - Entry code
  * Description: checks for lowercase character.
  * @c: character to be checked
  *
  * Return: 1 if lowercase or 0 if otherwise
  */
int _islower(int c)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
