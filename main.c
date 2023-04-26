#include "main.h"
#include <stdio.h>
int main(void)
{
    int len, len2;

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("Len:[%d]\n", len2);
    printf("Len:[%d]\n", len);
    return (0);
}
