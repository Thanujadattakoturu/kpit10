#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    if (nums1Size > nums2Size) 
    {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }

    int x = nums1Size, y = nums2Size;
    int low = 0, high = x;

    while (low <= high) 
    {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? -1000000 : nums1[partitionX - 1];
        int minRightX = (partitionX == x) ? 1000000 : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? -1000000 : nums2[partitionY - 1];
        int minRightY = (partitionY == y) ? 1000000 : nums2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) 
        {
            if ((x + y) % 2 == 0) 
            {
                return (double)(fmax(maxLeftX, maxLeftY) + fmin(minRightX, minRightY)) / 2;
            } 
            else 
            {
                return (double)fmax(maxLeftX, maxLeftY);
            }
        } 
        else if (maxLeftX > minRightY)
        {
            high = partitionX - 1;
        } 
        else 
        {
            low = partitionX + 1;
        }
    }

    return -1.0; 
}

int main() {
    int m, n;
    printf("size of num1: ");
    scanf("%d", &m);
    int nums1[m];

    printf("elements of nums1: ");
    for (int i = 0; i < m; i++)
     {
        scanf("%d", &nums1[i]);
    }

    printf("size of nums2: ");
    scanf("%d", &n);
    int nums2[n];

    printf("elements of nums2: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums2[i]);
    }
    double median = findMedianSortedArrays(nums1, m, nums2, n);
    printf("Median: %.5f\n", median);

    return 0;
}
