#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - Concatenate program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing concatenated arguments,
 *         each separated by a newline character '\n', or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	char *result;
	int position = 0;
	int len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}

	result = (char *)malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len = strlen(av[i]);
			strcpy(result + position, av[i]);
			position += len;
			result[position] = '\n';
			position++;
		}
	}

	result[position] = '\0';
	return (result);
}
