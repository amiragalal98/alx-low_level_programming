#include <stdio.h>
/**
 * augmented assignment operators =
 * used to replace a statment
 * where an operator ( +, -, *, /, %)
 * takes a avriable as one of
 * its argments and
 * then assigns the result back to 
 * the same variable
 * x = x + 1;
 * x+=1;
 */
int main(void)
{
	int x, y;
	y = 8;
	x = 5;
	x += 3;
	y *= 2;


	printf("the value of x = x + 3: %d\n", x);
	printf("the value of y = y * 2: %d", y);
	return (0);
}
