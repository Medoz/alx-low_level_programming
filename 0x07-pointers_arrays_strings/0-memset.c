#include "main.h"


/**
 * _memset - function to fill the first bytes pf the memory
 * starting from @n
 * @n: number of bytes in the memory to be filled
 * @b: value to fill @n
 * @s: pointer of the buffer
 * Return: the memory area of the pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
