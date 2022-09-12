#include <stdio.h>

/**
 * main - Remove two latters
 *
 * Return: Outcome(Okay)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}

