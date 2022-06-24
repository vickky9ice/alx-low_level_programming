#include "main.h"
#include <stdio.h>
/**Author: Adeboye Victor Oyekanmi*/

/**
 * main - print number of args
 * Return: 0
 * @argc: amount of args
 * @argv: pointer to pointers array
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc)
	{
		argc--;
		argv--;
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
