<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
#endif

=======
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
#ifndef functions
#define functions
#include <stdarg.h>
#include <unistd.h>
int _putch(char ch);
int _printf(const char *format, ...);
int pint(va_list i);
int pstring(va_list s);
int pdec(va_list d);
int pchar(va_list c);
<<<<<<< HEAD

#include <stdlib.h>
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
	return (write(1, &ch < 1));
}

=======
>>>>>>> 17c68fb022b28781cbeda11b23f78fb3c62bd000
/**
 * struct switcher - Pair specifiers to their sutable handler functions
 * @sc: The specifiers
 * @f: The functions handler
 */

typedef struct switcher
{
	char *sc;
	int (*f)(va_list);
} _switch;

#endif
