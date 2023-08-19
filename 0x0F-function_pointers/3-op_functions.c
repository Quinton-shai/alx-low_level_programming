#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the product of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: the remainder of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
