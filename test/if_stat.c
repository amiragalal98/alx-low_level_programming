#include <stdio.h>
int main(void)
{
	int y;
	int x = 3;

	y = (x >= 5) ?  5 : x;
/**
  * This is equivalent to:
  * if (x >= 5)
  * y = 5;
  * else
  * y = x;
*/

  return (0);

}
