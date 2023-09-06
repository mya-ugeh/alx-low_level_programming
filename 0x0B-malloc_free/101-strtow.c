#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - Split a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str is NULL or empty or if memory allocation fails.
 */
char **strtow(char *str)
{
	int num_words = 0;
	int in_word = 0;
	int i;
	char **result;
	int word_length;
	int word_index;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				num_words++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	if (num_words == 0)
	{
		return (NULL);
	}

	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (word_length == 0)
			{
				result[word_index] = str + i;
				word_index++;
			}
			word_length++;
		}
		else if (word_length > 0)
		{
			str[i] = '\0';
			word_length = 0;
		}
	}

	result[word_index] = NULL;

	return (result);
}
