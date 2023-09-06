#include <stdio.h>
#include "main.h"

/**
 * main - This will print the numbers of arguement passed to the program.
 * @argc: This is the number of arguements
 * @argv: This is the number of Arrays
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
