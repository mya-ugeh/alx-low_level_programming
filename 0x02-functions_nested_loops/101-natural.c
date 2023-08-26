#include <stdio.h>
/**
  * main - Entry code
  * Description: the sum of all the multiples of 3 or 5 below 1024
  *
  * Return: 0
  */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("The sum of multiples of 3 or 5 below 1024 is: %d", sum);
	printf("\n");

	return (0);
}
