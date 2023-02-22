#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 * Description: print all single digit numbe of base 10
 * starting from 0, followed by new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
