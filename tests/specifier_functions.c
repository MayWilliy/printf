#include "main.h"
/**
 * pchar - functions that prints character
 * @c : character
 * Return: the numbers of characters print except null byte
 */
int pchar(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putch(my_char);
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
	int idx = 0;

	str = va_arg(st, char *);
	if (str == NULL)
		str = "(null)";
	while (str[idx])
	{
		_putch(str[idx]);
		idx++;
	}
	return (idx);
}
/**
 * pdec - function thta prints decimal
 * @d : decimal
 * Return: the character printed expect null byte
 */
int pdec(va_list d)
{
	int len = 0, pow, j, digit, n, count = 0, num;

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
		pow = 1;
		for (j = 1; j <= len - 1; j++)
			pow *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow;
			if (n < 0)
				_putch((digit * -1) + 48);
			else
				_putch(digit + '0');
			count++;
			n -= digit * pow;
			pow /= 10;
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
	unsigned int len, power, j;
	int digit, n, count = 0, num;

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
		power = 1;
		for (j = 1; j <= len - 1; j++)
			power *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / power;
			if (n < 0)
				_putch((digit * -1) + 48);
			else
				_putch(digit + '0');
			count++;

			n -= digit * power;
			power /= 10;
		}
	}
	else
	{
		_putch('0');
		return (1);
	}
	return (count);
}
