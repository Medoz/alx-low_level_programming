#include "main.h"
#include <string.h>

/**
 * _strncat - appends one string to another using bytes
 * @dest: first string
 * @src: second string to append
 * @n: number of bytes
 * Return: a full string after concatenation.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
