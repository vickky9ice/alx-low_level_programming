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
	char b;

	for (char b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (char b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
