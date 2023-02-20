#include<stdio.h>

/**
 *main - print alphabet eccept e and q
 *
 *Description: use main to print alphabet in lowercase excluding e
 * and q
 *Return: 0(Success)
 */

int main(void)
{

char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);

}
}
putchar('\n');
return (0);
}
