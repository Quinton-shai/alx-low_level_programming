#include <stdio.h>
#include "main.h"

/**
 * main - The name of the program.
 * @argc: Num of argument.
 * @argv: Array of argument.
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
