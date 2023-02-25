#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * 
 * Retrun: 0-9 followed by new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
		_putchar('\n');
}
