#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - Prints the alphabert without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for ( i=97; i < 127; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
Return (0);
}