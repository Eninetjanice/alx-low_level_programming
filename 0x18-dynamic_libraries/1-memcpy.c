#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: string pointer & memory area2, where content is to be copied
 * @src: memory area1, string pointer to data source to be copied
 * @n: byte to be copied
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
