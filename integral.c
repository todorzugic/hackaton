#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int integralReplacement(int t)
{
    int counter = 0;

    while (t != 1) {
        if (t % 2 == 0) {
            t = t / 2;
            counter++;
        }
        else {
            t = t + 1;
            counter++;
        }
    }
    printf("%d\n", counter);
    return (counter);
}

int main (int argc, char **argv)
{
    integralReplacement(atoi(argv[1]));
    return (0);
}