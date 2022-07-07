#include "main.h" /* include all necessaries libraries */

/**
 * _putchar - writes the character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _put_char(char c)
{
	return (write(1, &c, 1));
}
