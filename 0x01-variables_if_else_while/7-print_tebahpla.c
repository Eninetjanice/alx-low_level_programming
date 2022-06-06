#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/
/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
