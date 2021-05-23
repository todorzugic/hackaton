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

    while (n != 0) {
        if (isBadVersion(n) == true)
            printf("Output: %d\n", (n));
        n--;
    }
    return (0);
}

int main(char **argv, int argc)
{
    if (error_handling(argv, argc) == 84)
        return (84);
    firstBadVersion(atoi(argv[1]));
    return (0);
}