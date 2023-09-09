#include <stdio.h>
#include "main.h"
/**
  * _strlen - return lenght of string
  * @s: char
  * Return: string
  */
int _strlen(char *s)
{
	int lenght = 0;

	while(s[lenght] != '\0')
	{
		lenght++;
	}

	return (lenght);
}	
