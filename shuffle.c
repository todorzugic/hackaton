#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *restoreString(char *str, int *indices, int indicesSize)
{
    char * res = malloc(indicesSize + 1);
    strcpy(res, str);
    for (int t = 0 ; t < indicesSize; t++) {
        res[indices[t]] = str[t];
    }
    return (res);
}

int main (char **argv, int argc)
{
    int indicies[8] = {4,5,6,7,0,2,1,3};
    int size = strlen("codeleet");
    printf("%s\n", restoreString("codeleet", indicies, size));
    return (0);
}