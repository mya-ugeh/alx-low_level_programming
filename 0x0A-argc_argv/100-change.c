#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry code
  * @argc: number of parameter
  * @argv: array of strings
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int cents;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	int coin_count = 0;
	int coin_index = 0;
	int num_this_coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0 && coin_index < num_coins)
	{
		num_this_coin = cents / coin_values[coin_index];
		coin_count += num_this_coin;
		cents -= num_this_coin * coin_values[coin_index];
		coin_index++;
	}

	printf("%d\n", coin_count);

	return (0);
}
