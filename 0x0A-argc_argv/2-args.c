#include <stdio.h>
#include "main.h"

/**
 * main - This will prints all arguements its accepts
 * @argc: This is the number of arguements
 * @argv: This is the Array of Arguements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
