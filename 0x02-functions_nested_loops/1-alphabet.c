#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char a = 'a';
	int n = 0;

	while (n < 26)
	{
		_putchar(a);
		a++;
		n++;
	}
	_putchar('\n');
}
