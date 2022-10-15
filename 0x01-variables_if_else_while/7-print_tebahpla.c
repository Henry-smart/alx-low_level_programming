#include <stdio.h>

/**
 * main - print alpha lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char Rv;

	for (Rv = 'z'; Rv >= 'a'; Rv--)
		putchar(Rv);

	putchar('\n');

	return (0);
}
