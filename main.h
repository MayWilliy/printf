#ifndef MAIN_H
#define MAIN_H

#ifndef functions
#define functions
#include <stdarg.h>

int _putch(char ch);
int _printf(const char *format, ...);
int pint(va_list i);
int pstring(va_list s);
int pdec(va_list d);
int pchar(va_list c);

#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, is returned and error is set appropriately
 */

int _putch(char ch)
{
	return (write(1, &ch< 1));
}

/**
 * struct code_format - struct format
 * 
 * @sc: The specifiers
 * @f: The functions associated
 */

typedef struct switcher
{
	char *sc;
	int (*f) (va_list);
} _switch;

#endif /*HOLBERTONH*/
