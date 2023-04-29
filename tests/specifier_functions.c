#include "main.h"
#include <stdarg.h>
/**
 * pchar - function that prints character
 * @c: character
 * Return: the nuber of characters to be printed without null byte
 */
int pchar(va_list c)
{
	unsigned char my_code;

	my_code = va_arg(c, int);
	_putch(my_code);
	return (1);
}
/**
 * pstring - function that prints strings
 * @st: string
 * Return: the number of charaters to be printed expect null byte
 */
int pstring(va_list st)
{
	char *str;
	int box = 0;

	str = va_arg(st, char *);
	if (str == NULL)
		str = "(null)";
	while (str[box])
	{
		_putch(str[box]);
		box++;
	}
	return (box);
}
/**
 * pdec - function that prints decimal
 * @d: decimal
 * Return: the number of charaters printed expect null byte
 */
int pdec(va_list d)
{
	int len = 0, cart, j, dg, n, count = 0, num;


	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putch('-');
			count++;
		}
		num = n;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		cart = 1;
		for (j = 1; j <= len - 1; j++)
			cart *= 10;
		for (j = 1; j <= len; j++)
		{
			dg = n / cart;
			if (n < 0)
				_putch((dg * -1) + 48);
			else
				_putch(dg + '0');
			count++;
			n -= dg * cart;
			cart /= 10;
		}
	}
	else
	{
		_putch('0');
		return (1);
	}
	return (count);
}
/**
 * pint - function that prints integer
 * @i : integer
 * Return: the number of chararteer printed expect byte
 */
int pint(va_list i)
{
	unsigned int len, point, j;
	int assign, n, count = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putch('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		point = 1;
		for (j = 1; j <= len - 1; j++)
			point *= 10;
		for (j = 1; j <= len; j++)
		{
			assign = n / point;
			if (n < 0)
				_putch((assign * -1) + 48);
			else
				_putch(assign + '0');
			count++;

			n -= assign * point;
			point /= 10;
		}
	}
	else
	{
		_putch('0');
		return (1);
	}
	return (count);
}
/**
<<<<<<< HEAD
 * pbin - Print binary
 * @args: - Arguments
 * Return: index
=======
 * pbin - function that print binary
 * @args: argument
 * Return: the number of characters printed (excluding the null byte)
>>>>>>> 91989916c1646e666406353375f0483f31c55e35
 */
int pbin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char bin[33];
	int i;
	int idx = 0;

	if (n == 0)
	{
		_putch('0');
		return (1);
	}
	while (n > 0)
	{
		bin[idx++] = (n % 2) + '0';
		n /= 2;
	}
	bin[idx] = '\0';
	for (i = (idx - 1); i >= 0; i--)
		_putch(bin[i]);
	return (idx);
}
