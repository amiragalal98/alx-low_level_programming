#include <stdio.h>
/**
 * This is why you will see double being used any time accuracy is important, 
 * such as in scientific, medical or financial applications
 * In general, the program takes a double and a float and adds 0.1 
 * to each over and over again numOfLoops times. So if you set it to 1000000, 
 * that means it’s adding 0.1 ten times, or 0.1 x 1000000 so the output would be 100000.0. 
 * float and double both give you this value, 
 * but keep making numOfLoops higher and a float will start to give unexpected results, 
 * showing their lower precision and rounding issues.
 */

int main() {
  
// Modify this variable value, start low and increase until something odd appears in the results
  int numOfLoops =1000000;

  // Please do not modify anything below this point
  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);

// If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
    y += x;
  }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);

}
