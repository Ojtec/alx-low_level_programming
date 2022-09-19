#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: string
 * Return: return length as integer;
 */

int _string(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
		len++;
	return(len);
}

