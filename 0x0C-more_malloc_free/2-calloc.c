#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Reserve needed memory using malloc*/
	ptr = malloc(size * nmemb);

	/*Verify that malloc did not fail*/
	if (ptr == NULL)
		return (NULL);

	/*Fill reserved memory with 0*/
	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
