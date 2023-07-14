#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: array range start value
 * @max: array range end value
 * Return: pointer to the newly created array or null if it fails
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
