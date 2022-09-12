#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return: Outcome(Okay)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= 9; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

