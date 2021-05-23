#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483647

int maxRotateFunction(int* nums, int numsSize)
{
	int res;
	int total = 0;
	int temp = 0;

	for(int t = 0; t < numsSize; t++) {
        if (t == INT_MAX || t == INT_MIN)
            return (84);
		temp += t * nums[t];
		total += nums[t];
	}
	res = temp;
	for(int t = numsSize - 1; t > 0; t--) {
		temp += total - numsSize * nums[t];
		if(temp > res) {
			res = temp;
		}
	}
	return (res);
}

int main (int argc, char **argv)
{
    int nums[4] = {4,3,2,6};

    maxRotateFunction(nums, 4);
    return (0);
}