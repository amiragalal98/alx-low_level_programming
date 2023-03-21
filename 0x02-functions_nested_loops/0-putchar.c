#include "main.h"
/**
 * main -Entry point
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int str[] = {11, 31, 116, 14};
	int count, size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
