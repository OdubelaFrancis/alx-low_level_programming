#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function of generating a random number
 * Description: prints all base 16 numbers in lowercase plus a new line inclusive
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
	if (a < 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
