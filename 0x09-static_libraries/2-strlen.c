#include "main.h"

/**
 * _strlen - This will return the length of a string
 * @s: The string
 * Return: Length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}