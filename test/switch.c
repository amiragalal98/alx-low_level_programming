#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 (success)
 * switch: A more effient alterative to using many "else if" statements
 * allows a value to be tested for equality against many cases
 */
int main(void)
{       
        char grade;

        printf("\nEnter a letter grade:");
        scanf("%c", &grade);
        switch(grade)
        {
                case 'A':
                        printf("perfect\n");
                        break;
                case 'B':
                        printf("very good\n");
                        break;
                case 'C':
                        printf("good\n");
                        break;
                case 'D':
                        printf("barely acceptable\n");
                        break;
                case 'F':
                        printf("Not acceptable\n");
                        break;
                        default:
                        printf("please enter correct value\'A, B, C, D, F\'");

        }
}
