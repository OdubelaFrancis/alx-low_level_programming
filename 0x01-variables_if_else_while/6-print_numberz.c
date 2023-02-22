#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 * Description: print all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(48 + ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
