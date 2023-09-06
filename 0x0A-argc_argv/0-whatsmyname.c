#include <stdio.h>
#include "main.h"

/**
 * main - This will print the name of the programm
 * @argc: This is the number of Arguement
 * @argv: This is the array of the arguements
 *
 * Return: Always 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
