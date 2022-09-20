#include "main.h"
#include <string.h>

/**
 * print_rev - reverse order printing
 *
 * @s: string to reverse
 * Return: always 0
 */

void print_rev(char *s)
{
	int i, n;

	s = "hello"
		n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

