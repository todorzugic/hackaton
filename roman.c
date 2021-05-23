#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ONE 'I'
#define FIVE 'V'
#define TEN 'X'
#define FIFTY 'L'
#define HUNDO 'C'
#define FIVE_HUNDO 'D'
#define HILJADU 'M'

int value (char t)
{
    if (t == ONE)
        return 1;
    if (t == FIVE)
        return 5;
    if (t == TEN)
        return 10;
    if (t == FIFTY)
        return 50;
    if (t == HUNDO)
        return 100;
    if (t == FIVE_HUNDO)
        return 500;
    if (t == HILJADU)
        return 1000;
    return -1;
}

int romanToInt(char *str)
{
    int res;
    int val1;
    int val2;

    for (int t = 0; t < strlen(str); t++) {
        val1 = value(str[t]);
        if (t + 1 < strlen(str)) {
            val2 = value(str[t + 1]);
            if (val1 >= val2)
                res = res + val1;
            else {
                res = res + val2 - val1;
                t++;
            }
        }
        else
            res = res + val1;
    }
    printf("Output: %d\n", res);
    return (0);
}

int main (int argc, char **argv)
{
    romanToInt(argv[1]);
    return (0);
}