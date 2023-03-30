#include <stdio.h>
int main(void)
{
    int i ,j;
    int width = 10;
    int hight = 12;

     for (i =1; i <= hight; i++){
        for (j = 0; j <= width; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        
        }
printf("\n");
     }

}
