#include "main.h"

/**
 * _strcpy - This will copy a string
 * @dest: input
 * @src: input
 * @n: input value
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
