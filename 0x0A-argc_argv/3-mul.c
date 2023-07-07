#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
}
