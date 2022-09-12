#include <stdio.h>

/**
 * main - Prints reverse alphabet
 *
 * Return: Outcome(Okay)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

