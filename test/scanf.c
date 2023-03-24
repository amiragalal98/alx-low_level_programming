#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 (success)
 * scanf() function is used to assign input to variables.
 * & must be used to access the variable addresses.
 * The & isn't needed for a string because a string name acts as a pointer.
 */
int main(void)
{
	int age;
	char name[100];

	scanf("%d %s", &age, name);
	printf("%s your age :%d", name, age);
	return (0);
}
