#include <stdio.h>

int missingNumber(int* nums, int numsSize)
 {
    int expectedSum = (numsSize * (numsSize + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < numsSize; i++)
     {
        actualSum += nums[i];
    }

    return expectedSum - actualSum; 
}

int main() {
    int numsSize;
    scanf("%d", &numsSize);

    int nums[numsSize];
    printf("Enter %d elements:\n", numsSize);
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Missing number: %d\n", missingNumber(nums, numsSize));

    return 0;
}
