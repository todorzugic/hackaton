#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int chose (int first, int second)
{
    return (first <= second ? first : second);
}

int integerReplacement(int t)
{
    int counter = 1;

    if (t == 1) {
        return 0;
    } else {
        if (t % 2 == 0) {
            counter += integerReplacement(t / 2);
        } else {
            counter += chose(integerReplacement(t - 1), integerReplacement(t + 1));
        }
    }
    return (counter);
}

int main (int argc, char **argv)
{
    int t = integerReplacement(atoi(argv[1]));
    return (t);
}