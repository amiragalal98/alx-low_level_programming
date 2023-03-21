#include "main.h"
/**
 * print_alphabet_x10 -Print the alphabet 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
