#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer containing s1 followed by 1st n bytes of s2 & '\0', NULL 4 F.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	/*Get length of s1*/
	while (s1 && s1[len1])
		len1++;
	/*Get length of s2*/
	while (s2 && s2[len2])
		len2++;
	/*Reserve memory space with malloc*/
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	/*Verify that malloc did not fail*/
	if (s == NULL)
		return (NULL);
	/*Transfer all bytes from s1 to new buffer s*/
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	/*Transfer n bytes from s2 to remaining spaces of new buffer s*/
	while (n < len2 && i < (len1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		s[i++] = s2[j++];
		/*Append a terminating null byte at the end*/
		s[i] = '\0';
	}
	return (s);
}
