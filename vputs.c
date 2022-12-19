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
    va_list args;
    char *str;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    va_start(args, nbr);
    while(i < nbr) {
        str = va_arg(args, char *);
        while (str[j] != '\0') {
            write(1, &str[j], 1);
            j += 1;
            k += 1;
        }
        write(1, "\n", 1);
        i += 1;
        j = 0;
    } va_end(args);
    return(k);
}
