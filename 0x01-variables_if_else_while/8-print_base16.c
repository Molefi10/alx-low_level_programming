#include<stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *Description: use main prints all the numbers of base 16 in lowercase
 *Return: 0(Success)
 */

int main(void)
{
int n;
char al;

for (n = 0; n <= 9; n++)
{
putchar('0' + n);
}
for (al = 'a'; al <= 'f'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}

