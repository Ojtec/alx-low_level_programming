#include "main.h"
/**
 * main - Prints lowercase
 *
 * Return: output(Okay)
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

