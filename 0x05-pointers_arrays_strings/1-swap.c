#include "main.h"


/**
 * swap.c - swap two integer values
 *
 *@a: first integer
 *@b: second integer
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
