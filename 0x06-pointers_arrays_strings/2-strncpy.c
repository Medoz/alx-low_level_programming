#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string into another array of string
 * @dest: array of string to be modified
 * @src: array of string to be copied
 * @n: number of bytes
 * Return: dest array after modification
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
