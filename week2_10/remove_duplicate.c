#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) 
{
    if (numsSize == 0) return 0;
    
    int k = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() 
{
    int nums[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Output: %d, nums = [", k);
    for (int i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if (i < k - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
