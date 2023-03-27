#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: 0 (Success);
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
