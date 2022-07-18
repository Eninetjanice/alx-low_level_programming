#include <stdio.h>

/**
 * main - prints number of argumments passed
 * @argc: argument count
 * @argv: argument value
 *
 * Return: a number followed by \n
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
