#include <stdlab.h>
#include <time.h>
#include <stdio.h>
/** more headers go there
 * main -entry point
 *
 * Return: Alyways 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagative\n", n);
	}
return (0);
}
