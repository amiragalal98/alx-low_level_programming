#include <stdio.h>
#include <stdbool.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ct = 'c'; /* single character using %c */
	char st[] = "string"; /* array of character using %s */
	float ft = 3.141513; /* float = 4 bytes = 32 bits = 8 digits using %f */
	double dt = 5.12345678912345;
	/* double = 8bytes = 64 bits = 16 digit using %lf */
	bool bt = true; /* bool = 1byte (true or false) using %d */
	 char cht = 100; /* 1 btye (-128 : 127) using %d or %c */
	 unsigned char = 255; /* 1 byte (0 : 255) using %d or %c */
	 short int sint = 32767; /* 2 byte ( -32768 : 32767) %d*/
	 unsigned short usint = 65535; /* 2 byte ( 0 : 65535) using %d */
	 int intt = 2147843647; /* 4 byte (- 2,147,483,648 : +..)using %d */
	 unsigned int uint = 4294967295; /* 4 byte using %u */
	 long long int llit = 9223372036854775807; /* 8 byte using %lld */
	 unsigned long long int ullit = 184466174061610414141016014;
	 /* 8 byte llu */

	printf("Size of int is %d bytes\n", sizeof(int));
	printf("Size of unsigned int  is %u bytes\n", sizeof(unsigned int));
	printf("Size of short int is %d bytes\n", sizeof(short int));
	printf("Size of unsigned short int is %d bytes\n",
	sizeof(unsigned short int));
	printf("Size of long long int is %lld bytes\n", sizeof(long long int));
	printf("Size of unsigned long long int is %llu bytes\n",
	sizeof(unsigned long long int));
	printf("Size of float is %d bytes\n", sizeof(float));
	printf("Size of double is %d bytes\n", sizeof(double));
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Size of unsigned char is %d bytes\n", sizeof(unsigned char));
	printf("Size of boolean is %d bytes\n", sizeof(bool));

}
