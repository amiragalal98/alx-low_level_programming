#include <stdio.h>
#include <math.h>
/**
 * main -Entry point
 * Return: return 0 (success)
 */
int main(void)
{
	double sq = sqrt(9);
	double pw = pow(2, 5);
	int rd = round(3.14);
	int cl = ceil(3.14); /* round up 4 */
	int fl = floor(3.14); /* round down 3 */
	double fb = fabs(-100); /* absolute value, make positive */
	double lg = log(3);
	double sn = sin(45);
	double cs = cos(45);
	double tn = tan(45);

	printf("the square root of 9 = %.f\n", sq);
	printf("2 power 5 = %.f\n", pw);
	printf("the round 3.14 = %d\n", rd);
	printf("the round up ( ceil) 3.14 = %d\n", cl);
	printf("the round down (floor) 3.14 = %d\n", fl);
	printf("the absolute value of (-100) = %.f\n", fb);
	printf("log(3) = %f\n", lg);
	printf("sin(45) = %f\n", sn);
	printf("cos(45) = %f\n", cs);
	printf("tan (45) = %f\n", tn);
	return (0);
}
