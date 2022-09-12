#include <stdio.h>

/**
 * main - Prints hexadecimal number
 *
 * Return: Outcome(Okay)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}

