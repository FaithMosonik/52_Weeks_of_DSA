#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int nonZeroIndex = 0; // Position to place non-zero elements

    // First pass: Move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[nonZeroIndex];
            nums[nonZeroIndex] = temp;
            nonZeroIndex++;
        }
    }
}
