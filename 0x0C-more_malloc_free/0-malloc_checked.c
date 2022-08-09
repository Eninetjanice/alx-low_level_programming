#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc
* @b: amount of memory to allocate in bytes
* Return: returns pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *ptr; /*declaration of a pointer to be used*/

	ptr = malloc(b); /*reserve memory spaces in heap*/
	/*if malloc doesn't fails*/
	if (ptr == NULL)
	{
		free(ptr);
		exit(98); /*Terminate process with 98 as return value*/
	}
	return (ptr);
}
