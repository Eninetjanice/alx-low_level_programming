#include <stdio.h>

/**
 * main - prints number of argumments passed
 * @argc: argument count
 * @argv: argument value
 *
 * Return: a number followed by \n
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
