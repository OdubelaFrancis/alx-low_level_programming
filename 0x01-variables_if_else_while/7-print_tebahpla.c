#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  is the main function of generating a random number
 * Descripion: prints all single digit numbe of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */

int main(void)
{
	char ch = 'z';

	while  (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
