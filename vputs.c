/*
 * E89 Pedagogical & Technical Lab
 * project:     Puts variadique
 * created on:  2022-12-16 - 16:15 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: vputs.c
 */

#include <unistd.h>
#include <stdarg.h>

int stu_vputs(unsigned int nbr, ...)
{
    unsigned int i;
    char *str;
    va_list args;

    i = 0;
    va_start(args, nbr);
    while(i <= nbr) {
        str = va_arg(args, char *);
        i += 1;
    } write(1, str, 1);
    va_end(args);
    return(0);
}
