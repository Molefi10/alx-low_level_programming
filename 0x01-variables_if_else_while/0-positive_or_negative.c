#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/*
* main -print if the number is postive, zero, or negative
*
*Description: using the main function this print
*in the variable n is positive or negative.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /*Code goes below here */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}

