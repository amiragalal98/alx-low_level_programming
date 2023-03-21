#include <unistd.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: return 0 (success)
 */
int_putchar(void)
{
	return (printf("_putchar\n"));
}
int main(void)
{
	_putchar();
	return (0);
}
