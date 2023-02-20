#include<stdio.h>

/**
 *main -prints the lowercase alphabet in reverse
 *
 *Description: uses main to pritnt reversed alphabets
 *Return: 0(Success)
 */

int main(void)
{
char al_rev;

for (al_rev = 'z'; al_rev >= 'a'; al_rev--)
{
putchar(al_rev);
}
putchar('\n');

return (0);
}
