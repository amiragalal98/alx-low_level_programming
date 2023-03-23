#include "main.h"
/**
 * _isupper -Checks if parameter is an uppercasr
 *
 * @c: input character
 * Return: 1 if uppercase, 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
