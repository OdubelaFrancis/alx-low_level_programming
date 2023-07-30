#include "main.h"

/**
 * print_numbers - Printing of numbers from 0 to 9 with a line.
 *
 * Return: is 0 on success.
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
