#include <stdlib.h>
#include "main.h"
/**
  * create_array - create array of chars
  * @size: lenght
  * @c: initialize
  * Return: 1 0r 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
