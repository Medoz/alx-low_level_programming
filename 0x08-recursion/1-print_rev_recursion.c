#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @g: The string to be printed.
 */
void _print_rev_recursion(char *g)
{
	if (*g)
	{
		_print_rev_recursion(g + 1);
		_putchar(*g);
	}
}

