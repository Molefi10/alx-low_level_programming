#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 *main - Entry point
 *
 *description:using the main function this print if the number
 *is postive, zero, or negative
 *Return: Always 0 (Success)
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

