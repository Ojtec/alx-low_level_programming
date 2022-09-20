#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverse order printing
 *
 * @s: string to reverse
 * Return: always 0
 */

void print_rev(char *s)
{
	int len = strlen(s)

		while (len--)
			putchar(*(s + len));
	putchar(10);
}

