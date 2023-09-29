#include "main.h"
/**
 * _print_rev_recursion - Prints a string in revers.
 * @s: print a stri.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
