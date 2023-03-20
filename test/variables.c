#include <stdio.h>
/**
* main -Entery point
*
* Return: Alaways 0 (success)
*/
int main(void)
{
	/**
	 * variable = Allocated space in memory to store a value.
	 * we refer to a variable's name to access the stored value.
	 * that variable now behaves as if it was the value it contains.
	 * But we need to declare what type of data we are storing.
	 */
	int age; /*declaration */
	float gpa; /* declaration */
	char grade; /*declaration */
	char name[] = "Amira";
	/**
	 * declaration && initialization
	 * initialize array of character
	 * C do not have string datatype :(
	 */

	age = 24; /*initialization integer*/
	gpa = 3.23; /*intialization float point number */
	grade = 'B'; /*intialization single character*/

	printf("This tutorial about variables\n");
	printf("Hello %s \n", name); /* %s for string */
	printf("your age is %d \n", age); /* for %d decimal for integer */
	printf("your grade is %c \n", grade); /* %c for character */
	printf("and your GPA is %f", gpa); /* %f for float */
	return (0);
}
