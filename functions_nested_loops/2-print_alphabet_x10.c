#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char codes = 'a';
	int a = 0;

	while (a < 10)
	{
		while (codes <= 'z')
		{
			_putchar(codes);
			codes++;
		}
		_putchar('\n');
		a++;
		codes = codes - 26;
	}
}
