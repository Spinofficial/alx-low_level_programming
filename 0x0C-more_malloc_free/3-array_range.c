#include <stdlib.h>
#include "main.h"

/**
 * *array_range - This creates an arrays of integers
 * @min: The minimum value of range stored
 * @max: The maximum range of value stored and The number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
