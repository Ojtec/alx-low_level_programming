#include <unistd.h>

/**
 * main - Prints a text
 *
 * Description: use the function to print
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 
	2015-10-19\n", 59);
	return (1);
}

