#include  <stdio.h>
#inlude "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: print a string
 * Return: okay
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

