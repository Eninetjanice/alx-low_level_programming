#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints name of the file it was compiled from, followed by a '\n'
 * Return: Always(0) Success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
