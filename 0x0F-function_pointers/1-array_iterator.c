#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This will print each array element on a newline
 * @array: This is the array
 * @size: This is how many element to print
 * @action: The pointer to print in reguler or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
