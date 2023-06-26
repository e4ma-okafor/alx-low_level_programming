#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: The array of elements
 * @n: number of elements in the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
