#include "main.h"
/**
 * correct_pair - Pairs the function with its respective function
 * @format: - The format specifier of the funtion
 * Return: Returns (NULL)
 */
int (*correct_pair(const char *format))(va_list)
{
	unsigned int index = 0;

	_switch pair[] = {
		{"c", pchar},
		{"s", pstring},
		{"d", pdec},
		{"i", pint},
		{NULL, NULL}
	};
	while (pair[index].sc)
	{
		if (pair[index].sc[0] == (*format))
			return (pair[index].f);
		index++;
	}
	return (NULL);
}
/**
 * _printf-Implementation of printf() function
 * @format: Format specifier
 * Return: Lenth og the string
 */
int _printf(const char *format, ...)
{
	va_list variables;
	int (*f)(va_list);
	unsigned int idx = 0, count = 0;

	if (!format)
		return (-1);
	va_start(variables, format);
	while (format[idx])
	{
		while (format[idx] != '%' && format[idx])
		{
			_putch(format[idx]);
			count++;
			idx++;
		}
		if (format[idx] == '\0')
			return (count);
		f = correct_pair(&format[idx + 1]);
		if (f != NULL)
		{
			count = count + f(variables);
			idx = idx + 2;
			continue;
		}
		if (!format[idx + 1])
			return (-1);
		_putch(format[idx]);
		count++;
		if (format[idx + 1] == '%')
			idx = idx + 2;
		else
			idx = idx + 1;
	}
	va_end(variables);
	return (count);
}
