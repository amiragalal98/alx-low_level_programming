#include "main.h"
/**
 * main -Entry point
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int str[] = {111, 112, 113, 43, 44, 66, 21, 34};
	int count, size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
