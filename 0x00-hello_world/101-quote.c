#include <unistd.h>
/**
  * main - Entry code
  *
  * Return: always 0
  */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 55);
	write(1, "\n", 1);
	return (1);
}
