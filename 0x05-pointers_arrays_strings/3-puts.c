#include "main.h"

/**
* _puts - print a string followed by a new line to stdout.
*@str: string output
*Return: No return
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
