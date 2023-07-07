#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	for (; argc--; )
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
