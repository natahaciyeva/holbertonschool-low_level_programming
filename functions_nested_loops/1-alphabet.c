#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char codes = 'a';

	while (codes <= 'z')
	{
		_putchar(codes);
		codes++;
	}
	_putchar('\n');
}
