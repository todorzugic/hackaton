#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int  error_handling(char **argv, int argc)
{
    if (argc != 1)
        return (84);
    return (0);
}

int firstBadVersion(int n)
{
    int t = 0;

    while (isBadVersion(t) == true) {
        t++;
    }
    return (t + 1);
}

int main(char **argv, int argc)
{
    int t;

    if (error_handling(argv, argc) == 84)
        return (84);
    t = firstBadVersion(argv[1]);
    printf("Output: %d\n", t);
    return (0);
}