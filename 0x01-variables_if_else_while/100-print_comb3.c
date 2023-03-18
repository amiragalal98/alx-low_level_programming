#include <stdio.h>
/**
 * main -Print numbers between 00 to 98
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;
	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++
	}
	putchar('\n');
	return (0);
}
