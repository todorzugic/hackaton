#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483647

int maxRotateFunction(int* nums, int numsSize) 
{
	int max;
	int total = 0;
	int temp = 0;

	if(numsSize == 0)
		return (0);
	for(int t = 0; t < numsSize; t++) {
		if(nums[t] == INT_MAX || nums[t] == INT_MIN)
			return (nums[t]);
		temp += t * nums[t];
		total += nums[t];
	}
	max = temp;
	for(int t = numsSize - 1; t > 0; t--) {
		temp += total - numsSize * nums[t];
		if(temp > max)
			max = temp;
	}
	return (max);
}