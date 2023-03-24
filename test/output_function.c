#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 success
 * putchar: outputs a single character
 * puts: function is used to display output as a string
 * printf: function is used to display output all types
 */
int main(void)
{
	char a = 'F';
	char b[100] = "hello, world";
	int c = 100;

	putchar(a);
	puts(b);
	printf("the number is:%d", c);
	return (0);
}
