#include <stdio.h>
/* function declaration */
int square(int num);

int main(void)
{
	int num;
	int result;
	printf("Enter num: ");
	scanf("%d", &num);
	result = square(num);
	printf("the square of num = %d", result);
}
int square(int num)
{
 int sq;

 sq = num * num;
 return (sq);
}
