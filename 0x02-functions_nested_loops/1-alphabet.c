#include "main.h"

/**
 * print_alphabet - prints the alphabetic
 *
 * Return: Always void (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
