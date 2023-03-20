#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	float item1 = 3.25;

	printf("display eight digit: %f \n", item1);
	printf("display two digit only: %.2f \n", item1);
	/* %.2f = numberof digit */
	printf("display field width: %22f \n", item1);
}
