#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write The Character C To A STDOUT.
 * @c: The Character To Print.
 * Return: On Success 1.
 * On error, -1 Is Returned, And Error Is Set Appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
