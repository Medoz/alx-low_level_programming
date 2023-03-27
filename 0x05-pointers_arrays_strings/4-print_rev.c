#include "main.h"
#include <string.h>

/**
 * print_rev - prints a function in reverse
 * @s: the string parameter to be printed
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
