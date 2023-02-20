#include<stdio.h>

/* betty style doc for function main  */
/**
 *main - print alphabet in lowercase
 *
 *Description:use main to print alphabets in lowercase
 *Return: 0 (Success)
 */
int main(void)
{
char Alphabet;

for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
{
putchar(Alphabet);
}
putchar('\n');

return (0);
}
