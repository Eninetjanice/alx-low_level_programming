#include "main.h"

/**
 * _strstr - finds the 1st occurrence of the substring needle in str haystack
 * @haystack: string pointer to be scanned
 * @needle: string pointer, to be searched within *haystack
 *
 * Return: returns pointer to the beginning of the located substring,
 * else returns '\0' if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *j;

	j = _strstr(haystack, needle);

	if (*j != '\0')
	{
		haystack = needle;
		j++;
		return (haystack);
	}
	return ('\0');
}
