#include "main.h"
#include <unistd.h>

/**
 * _putchar - write a character c in stdout
 * @c: The character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is sent appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
