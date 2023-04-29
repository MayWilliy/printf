#include "main.h"
/**
 * phex - Print hexa decimal smaall
 * @lst: Argument
 * Return: hex-num
 */
int phex(va_list lst)
{
	unsigned int val = va_arg(lst, unsigned int);
	unsigned int val2;
	char *hx;
	int n1 = 0, n2, c, ct = 0;

	if (!val)
	{
		return (_putch('0'));
	}
	for (val2 = val; val2 != 0; ct++)
	{
		val2 /= 16;
	}
	hx = malloc(ct);
	for (n1 = 0; val != 0; n1++)
	{
		c = val % 16;
		if (c < 10)
			hx[n1] =  c + '0';
		else
			hx[n1] = c - 10 + 'a';
		val /= 16;
	}
	for (n2 = n1 - 1; n2 >= 0; n2--)
		_putch(hx[n2]);
	free(hx);
	return (ct);
}
/**
 * pHex - Prints hexa decimal large
 * @lst: Argument
 * Return: hex number
 */
int pHex(va_list lst)
{
	unsigned int val = va_arg(lst, unsigned int);
	unsigned int val2;
	char *hx;
	int n1 = 0, n2, c, ct = 0;

	if (!val)
	{
		return (_putch('0'));
	}
	for (val2 = val; val2 != 0; ct++)
	{
		val2 /= 16;
	}
	hx = malloc(ct);
	for (n1 = 0; val != 0; n1++)
	{
		c = val % 16;
		if (c < 10)
			hx[n1] =  c + '0';
		else
			hx[n1] = c - 10 + 'A';
		val /= 16;
	}
	for (n2 = n1 - 1; n2 >= 0; n2--)
		_putch(hx[n2]);
	free(hx);
	return (ct);
}
