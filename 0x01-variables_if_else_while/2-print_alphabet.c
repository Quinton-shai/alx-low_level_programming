#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; ++i)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
