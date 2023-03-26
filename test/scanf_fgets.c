#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Return: return 0 (success)
 * scanf() function is used to assign input to variables.
 * & must be used to access the variable addresses.
 * The & isn't needed for a string because a string name acts as a pointer.
 * if the name contain space like First_Name Last_name
 * the scanf function read only First_name as first value
 * 
 * fgets function suitable for this
 */
int main(void)
{
	int age;
	char name[100];
	char course_name[50];

	printf("enter your name, course, age\n");
	fgets(name, 100, stdin);  /* fgets function allow space between First_Nm Last_Nm .... but include \n */
	name[strlen(name)-1]='\0'; /* to prevent new line take from fgets function #include <string.h> require */
	scanf("%s", course_name); /* scanf function do not allowed typing space like "C programming" */
	 scanf("%d", &age);
	printf("hello, %s\n", name);
	printf("the recorded course is: %s\n", course_name);
	printf("you are %d years old\n", age);
	return (0);
}
