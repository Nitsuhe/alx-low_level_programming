#include "main.h"

/**
 * print_alphabet - alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count++ < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
