#include "main.h"

/**
 * _puts - Prints a sring
 * @str: The string to print
 * Retrun: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
