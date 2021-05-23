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

    while (isBadVersion(t) == false)
        t++;
    return (0);
}

int main(char **argv, int argc)
{
    int t;

    if (error_handling(argv, argc) == 84)
        return (84);
    t = firstBadVersion(atoi(argv[1]));
    printf("Output: %d\n", t + 1);
    return (0);
}