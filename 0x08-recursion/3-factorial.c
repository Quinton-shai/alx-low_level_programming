#include "main.h"

/**
 * factorial - print the factorial of a number.
 * @n: return a number in a factorial form
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
