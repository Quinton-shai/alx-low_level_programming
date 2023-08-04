#include "main.h"
/**
 * _strlen_recursion - print the length of a string
 * @s: The string to be measured.
 *
 * Return: lenght of a string.
 */
int _strlen_recursion(char *s)
{
int longit = 0;

if (*s)
{
	longit++;
	longit = 1 + _strlen_recursion(s + 1);
}

return (longit);
}
