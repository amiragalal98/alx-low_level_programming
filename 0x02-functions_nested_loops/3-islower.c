#include "main.h"
/**
 * _islower -Checks for lowercase
 *
 * @c: The character in ASCII code
 * Return: return 1 is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
