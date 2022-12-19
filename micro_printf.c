/*
 * E89 Pedagogical & Technical Lab
 * project:     Micro printf
 * created on:  2022-12-19 - 11:15 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: micro_printf.c
 */

#include <unistd.h>
#include <stdarg.h>

unsigned int stu_strlen(const char *str);

int stu_mini_printf(const char *pattern, ...)
{
    unsigned int i;
    va_list args;
    char *str;
    int j;

    i = 0;
    va_start(args, pattern);
    while(pattern[i] != '\0') {
        if(pattern[i] == '%' && pattern[i + 1] == 's') {
            j = 0;
            str = va_arg(args, char *);
            write(1, &str[j], stu_strlen(str));
            i += 2;

        }
            if(pattern[i] == '%' && pattern[i + 1] == '%') {
                i += 1;
            }
        write(1, &pattern[i], 1);
        i += 1;
    }
    va_end(args);
    return(0);
}
