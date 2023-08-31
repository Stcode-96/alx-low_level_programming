#include "main.h"
#include <unistd.h>

/**
 * _putchar-displays character c
 * @c: printed character
 *
 * Return: Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
