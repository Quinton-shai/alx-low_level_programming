#include "main.h"

/**
 * char *_strcpy - a function that duplicates a string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int l = 0;

	while (*(src + l) != '\0')
	{
		++l;
	}
	for ( ; x < l ; ++x)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
