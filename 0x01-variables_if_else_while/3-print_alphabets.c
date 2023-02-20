#include<stdio.h>

/**
 *main - print alphabet in lowercase and uppercase
 *
 *Description: use main to print alphabet in uppercase and lowercase
 *Return: 0(Success)
 */

int main(void)
{
char lower_Alp;
char upper_Alp;
for (lower_Alp = 'a'; lower_Alp <= 'z'; lower_Alp++)
{
putchar(lower_Alp);
}
for (upper_Alp = 'A'; upper_Alp <= 'Z'; upper_Alp++)
{
putchar(upper_Alp);
}
putchar('\n');
return (0);
}
