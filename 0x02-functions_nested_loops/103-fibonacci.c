#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers
 * Return: void
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	for (; k + j < 4000000; ++i)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
			j = k - j;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
