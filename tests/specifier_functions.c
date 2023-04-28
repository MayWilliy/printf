#include "main.h"
/**
 * pchar - functions that prints character
 * @c : character
 * Return: the numbers of characters print except null byte
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
 * @st : strings
 * Return: the numbers of character printed expect null byte
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
 * pdec - function thta prints decimal
 * @d : decimal
 * Return: the character printed expect null byte
 */
int pdec(va_list d)
{
	int len = 0, cart, j, magic, n, count = 0, num;

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
			magic = n / cart;
			if (n < 0)
				_putch((magic * -1) + 48);
			else
				_putch(magic + '0');
			count++;
			n -= magic * cart;
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
 * Return: the number of characters to be printed expect null byte
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
