#include "main.h"

/**
 * print_triangle - A function that prints a triangle of any size
 * @size: The size of a triangle.
 *
 * Return: Always 0 on success.
 */

void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size > 0)
	{
		for (i = size ; i >= 1 ; i--)
		{
			for (space = 1 ; space < i ; space++)
			{
				_putchar('_');
			}
			for (hash = size ; hash >= i ; hash--)
			{
				_putchar('#');
			}
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
