#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
 {
    return (*(int *)a - *(int *)b);
}

int threeSumClosest(int* nums, int numsSize, int target) 
{
    qsort(nums, numsSize, sizeof(int), compare);
    
    int closestSum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) 
    {
        int left = i + 1, right = numsSize - 1;

        while (left < right) 
        {
            int currentSum = nums[i] + nums[left] + nums[right];
            if (abs(target - currentSum) < abs(target - closestSum)) 
            {
                closestSum = currentSum;
            }

            if (currentSum < target) 
            {
                left++; 
            } 
            else if (currentSum > target) 
            {
                right--;
            } 
            else 
            {
                return target; 
            }
        }
    }

    return closestSum;
}

int main() {
    int n, target;
    printf("number of elements in the array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    printf("target sum: ");
    scanf("%d", &target);

    int result = threeSumClosest(nums, n, target);
    printf("Closest sum: %d\n", result);

    return 0;
}
