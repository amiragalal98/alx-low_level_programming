#include <stdio.h>
/**
 * main: -Entry point print input.
 *
 * gets - function is used to read input string
 * string is stored in a char array
 * main - Enry point
 * Return: return 0 (success)
 */
int main(void)
{
	char a[100];

	gets(a);
	printf("you entered: %s", a);
	return (0);
}
