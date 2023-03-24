#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0 (success)
 * scanf input function that matches format specifiers
 * & sign before variable name i the address operator
 * it gives address location in memory, of a variable
 * it needed because scanf places input value at
 * a variable address
 */
int main(void)
{
	int a;
	char b[100];

	printf("please enter your age and name:\n");
	scanf("%d %s",&a, &b);
	printf("hello, %s\n your age is: %d", b, a);
	return (0);
}
