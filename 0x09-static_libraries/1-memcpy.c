#include "main.h"

/**
 * _memcpy - This is a function that copies memory area
 * @dest: memory were it is stored
 * @src: memory were it is copied
 * @n: the number of bytes
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
