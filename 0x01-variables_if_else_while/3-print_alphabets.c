/**
 * File: 3-print_alphabets.c
 * Auth: Adeboye Victor Oyekanmi
 *
 */

#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
