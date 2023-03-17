#include <stdio.h>
/**
 * main -Print number 0 9 with comma space
 *
 * Return: ALWYAS 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
