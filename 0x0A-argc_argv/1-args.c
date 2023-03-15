#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of arguments passed to the program
  * @argc: number of arguments
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
