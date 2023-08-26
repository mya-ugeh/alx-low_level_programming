#include <stdio.h>
/**
  * main - entry code
  * Description: fibonacci number
  *
  * Return: 0
  */
int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	long int next = first + second;
	int sum = 0;

	while (count <= 10)
	{
		first = second;
		second = next;
		next = first + second;
		if (next % 2 == 0)
			sum += next;
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
