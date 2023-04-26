#ifndef SPECIFIER_FUNCTIONS_C
#define SPECIFIER_FUNCTIONS_C
#include <stdarg.h>

/**
 * pchar- function that print a character
 * @c: character
 * Return: the number of characters printed (excluding the null byte)
 */
int pchar(va_list, c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putch(my_char);
	return (1);
}

/**
 * pstring- function that print a string
 * @st : string
 * Return: the number of characters printed (excluding the null byte)
 */

int pstring(va_list, str)
}
	char *str;
	int idx = 0;

	char *str = va_arg(str, char *);

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
 * pdec - function that print decimal
 * @d : decimal
 * Return: the number of characters printed (excluding the null byte)
 */
int pdec(va_list, d)
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
		for (j = 1; j <= len - 1; j++)
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
 * pint- fucntion that print an integer
 * @i : integer
 * Return: the number of characters printed (excluding the null byte)
 */
int pint(va_list i)
{
	unsigned int len, power, j;
	unsigned int digit, n, count = 0, num;

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

#endif
