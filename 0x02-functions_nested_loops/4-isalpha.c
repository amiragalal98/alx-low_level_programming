#include "main.h"
/**
 * _isalpha -Check lowercase or uppercase
 *
 * @c: The characterin ASCII
 * Return: return 1 if uppercase or lowercase
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
