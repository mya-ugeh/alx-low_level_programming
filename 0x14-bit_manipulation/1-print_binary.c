#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int bit_p;
	int bit_v;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bit_p = sizeof(unsigned long int) * 8 - 1; bit_p >= 0; bit_p--)
	{
		bit_v = (n >> bit_p) & 1;
		if (bit_v == 1)
			flag = 1;

		if (flag == 1)
			_putchar(bit_v + '0');
	}
}
