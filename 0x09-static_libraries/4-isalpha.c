#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character checked
 * Return: 1 if c is a letter, or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'));
}
