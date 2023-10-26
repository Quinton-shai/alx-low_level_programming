#include "main.h"

/**
 * get_endianness - prog checks the endian-ness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
