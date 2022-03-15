#include <stdio.h>
#include "main.h"

void print_putchar(void)
{
        char *chars = "_putchar";
        int i = 0;

        for (i = 0; i < 9; i++)
        {
                putchar(chars[i]);
        }
        putchar('\n');
}