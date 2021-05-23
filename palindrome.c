#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *odd(char *str)
{
    int middle = (strlen(str) / 2);
    int t = 0;
    int tmp = middle + 1;
    int tmp2 = middle - 1;

    while (tmp2 != -1) {
        str[tmp] = str[tmp2];
        tmp = tmp + 1;
        tmp2 = tmp2 - 1;
    }
    return (str);
}

char *even(char *str)
{
    int t = 1;
    int middle = (strlen(str) / 2);
    int tmp = middle;
    int tmp2 = middle;

    while (str[middle]) {
        str[tmp] = str[tmp2 - t];
        t++;
        middle++;
        tmp++;
    }
    return (str);
}

char *nearestPalindromic(char *n)
{
    int res;
    char tmp;
    char *temp = malloc(sizeof(char) * strlen(n));
    if (atoi(n) == __INT_MAX__)
        return (n);
    if (strlen(n) == 1) {
        res = atoi(n) - 1;
        tmp = res + '0';
        for (int t = 0;t != 1; t++) {
            temp[t] = tmp;
        }
        printf("one %s\n", temp);
        return (temp);
    } else if (strlen(n) % 2 != 0)
        return (odd(n));
    else 
        even(n);
}

int main (int argc, char **argv)
{
    nearestPalindromic(argv[1]);
    return (0);
}