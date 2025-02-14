#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
 {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize) 
{
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 1; i++)
     {
        if (nums[i] == nums[i + 1]) 
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize]; 
    printf("Enter %d elements:\n", numsSize);
    for (int i = 0; i < numsSize; i++) 
    {
        scanf("%d", &nums[i]);
    }

    if (containsDuplicate(nums, numsSize)) 
    {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
