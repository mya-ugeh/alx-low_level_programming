#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  *
  * @argc: print number of parameter
  * @argv: print string
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
