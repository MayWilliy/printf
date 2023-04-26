<<<<<<< HEAD
#ifndef SPECIFIER_FUNCTIONS_C
#define SPECIFIER_FUNCTIONS_C
#include <stdarg.h>

/**
 * pchar- function that print a character
 * @c: character
 * Return: the number of characters printed (excluding the null byte)
 */
int pchar(va_list, c)
=======
#include "main.h"
/**
 * pchar - Prints a character
 * @c: Character to be printed
 * Return: 1 (ONE)
 */
int pchar(va_list c)
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putch(my_char);
	return (1);
}
<<<<<<< HEAD

/**
 * pstring- function that print a string
 * @st : string
 * Return: the number of characters printed (excluding the null byte)
 */

int pstring(va_list, str)
}
=======
/**
 * pstring - Prints a string
 * @st: String to be printed
 * Return: Length of the string
 */
int pstring(va_list st)
{
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
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
<<<<<<< HEAD

/**
 * pdec - function that print decimal
 * @d : decimal
 * Return: the number of characters printed (excluding the null byte)
 */
int pdec(va_list, d)
=======
/**
 * pdec - Prints a decimal number
 * @d: Decimal to be printed
 * Return: Lenth og the decimal
 */
int pdec(va_list d)
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
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
<<<<<<< HEAD

/**
 * pint- fucntion that print an integer
 * @i : integer
 * Return: the number of characters printed (excluding the null byte)
=======
/**
 * pint - Prints and integer
 * @i: Integer to be printed
 * Return: Length of the integer
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
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
<<<<<<< HEAD

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
=======
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
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
	}
	else
	{
		_putch('0');
		return (1);
	}
	return (count);
}
<<<<<<< HEAD

#endif
=======
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
