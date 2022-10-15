#include <stdio.h>

/**
 * main - print alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{

	char Alp;

	for (Alp = 'a'; Alp <= 'z'; Alp++)
		putchar(Alp);

	for (Alp = 'A'; Alp <= 'Z'; Alp++)
		putchar(Alp);

	putchar('\n');

	return (0);
}
