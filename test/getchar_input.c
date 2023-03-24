#include <stdio.h>
/**
 * getchar - taking user input
 * getchar() returns the value of the next single character
 * Return: return 0 (success)
 */
int main(void)
{
	char a = getchar();

	printf ("you entered: %c", a);
	return (0);
}
