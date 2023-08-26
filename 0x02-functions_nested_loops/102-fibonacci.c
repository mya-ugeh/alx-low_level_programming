#include <stdio.h>
/**
  * main - entry code
  * Description: fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
	int fn = 1;
	int sn = 2;
	int n = 50;
	int i;

	printf("%d, %d", fn, sn);
	for (i = 3; i <= n; i++)
	{
		int next = fn + sn;
		printf(", %d", next);
		fn = sn;
		sn = next;
	}
	printf("\n");
	return (0);
}
