#include "main.h"

/**
 *print_alphabet_x10 -prints 10 times the alphabet, in lowercase
 *
 *Description:prints 10 times the alphabet, in lowercase,
 *followed by a new line.
 *Return: 0(Success)
 */

void print_alphabet_x10(void)
{
char al;
int i;
for (i = 0; i < 10; i++)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);

}
_putchar('\n');
}
}
