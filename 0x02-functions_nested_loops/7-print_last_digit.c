#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the passed args
 * Return: the last digit
 *
 */
int print_last_digit(int n)
{
int x;
if (x < 0)
	x = -x;
x = n % 10;
_putchar('0' + x);

return (x);

}
