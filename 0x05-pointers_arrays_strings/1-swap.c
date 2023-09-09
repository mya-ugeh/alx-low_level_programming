#include <stdio.h>
#include "main.h"
/**
  * swap_int - swap values of two integers
  * @a: first integer
  * @b: second integer
  */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
