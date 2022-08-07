#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char
 * @size: size of array
 * @c: integer of type char
 *
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	if (size == 0 || ptr == 0)
	{
		return (0);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
