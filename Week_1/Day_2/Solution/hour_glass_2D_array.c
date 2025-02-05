#include <stdio.h>
#include <limits.h>

int hourglassSum(int arr_row, int arr_colums, int **arr){
    int max_sum = INT_MIN;

    for(int i = 0; i<arr_row-2; i++){
        for(int j = 0; j<arr_colums-2; j++){
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if (sum > max_sum){
                max_sum = sum;
            }
        }
    }
    return max_sum;
}