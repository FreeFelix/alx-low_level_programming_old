#include "main.h"
/**
 * _print_rev_recursion - prints a string reverse
 * @s: as the string to print
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
