#include "main.h"

/**
 *print_alphabet - prints the alphabet, in lowercase
 *
 *Description: prints the alphabet, in lowercase,
 *followed by a new line
 *Return: o(Success)
 */

void print_alphabet(void)
{
char al;

for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);

}
_putchar('\n');
}
