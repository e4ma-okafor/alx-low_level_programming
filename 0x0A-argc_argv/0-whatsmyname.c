#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its
 * name followed by an ew line
 * @argc: argument count
 * @argv: argument value, a string
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
