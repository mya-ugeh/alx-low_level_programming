#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: no of parameter
  * @argv: print string
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int i;
		int mult = 1;

		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			mult *= num;
		}
		printf("%d\n", mult);
	}
	else
		printf("Error\n");

	return (0);
}
