#include <stdio.h>

/**
 * main - prints numbers 0-9
 *
 * Return: Outcome(Okay)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

