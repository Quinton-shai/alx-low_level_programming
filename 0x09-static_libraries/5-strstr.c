#include "main.h"
/**
 * _strstr - Entry points.
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = needle;
		char *l = haystack;

		while (*l == *p && *p != '\0')
		{
			++p;
			++l;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
