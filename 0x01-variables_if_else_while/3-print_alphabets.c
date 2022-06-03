/**
 * File: 3-print_alphabets.c
 * Auth: Adeboye Victor Oyekanmi
 *
 */

#include <stdio.h>

/*
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char bothcases;

	for (bothcases = 'a'; bothcases <= 'z'; bothcases++)
		putchar(bothcases);

	for (bothcases = 'A'; bothcases <= 'Z'; bothcases++)
		putchar(bothcases);

	putchar('\n');

	return (0);
}
