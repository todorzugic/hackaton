#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int different(int *arr, int size)
{
    int t = 0;
    int num = 0;
    int counter = 1;

    while (t != size) {
        if (arr[num] != arr[t])
            counter++;
        t++;
    }
    return (counter);
}

int coutner(int size, int diff)
{
    int sum;

    while (diff != 0) {
        sum = size * diff;
        diff--;
    }
    return (sum);
}

int subarrayBitwiseORs(int* arr, int arrSize)
{
    int diff = different(arr, arrSize);

    if (arrSize == diff)
        return (arrSize * 2 + 1);
        return (1);
    if (arrSize == 2 && diff == 2)
        return (3);
    if (arrSize == 2 && diff == 1)
        return (2);
    return (counter(arrSize, diff));
}