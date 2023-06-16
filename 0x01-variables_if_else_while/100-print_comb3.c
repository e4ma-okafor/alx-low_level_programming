#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dit, digt;

	for (dit = '0'; dit < '9'; dit++)
	{
		for (digt = dit + 1; digt <= '9'; digt++)
		{
			if (digt != dit)
			{
				putchar(dit);
				putchar(digt);

				if (dit == '8' && digt == '9')
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
