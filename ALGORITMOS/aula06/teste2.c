#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 8},
                 {4, 5, 6},
                 {7, 8, 9}};

    // Get total number of elements in array
    int size = sizeof(arr) / sizeof(arr[0]);

    int i;
    int sum1 = 0;
    int sum2 = 0;
    int diff = 0;
    int count = sizeof(arr);
    // int size = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < 3; i++){
        // printf("%d primeiro \n", sum1);
        // printf("%d primeiro \n", sum2);
        sum1=sum1 + arr[i][i];
        sum2= sum2 + arr[i][size-(i+1)];
        // printf("%d segundo \n", sum1);
        // printf("%d segundo \n", sum2);
        // printf("%d %d", sum1, sum2);
    }
    diff = sum1 - sum2;
    if (diff < 0){
        diff= diff * (-1);
    }
    // return diff;
    printf("%d", diff);
    // printf("%d", arr[size-1][size-1]);
}


int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int diff = 0;
    int count = sizeof(arr);
    int size = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < arr_rows; i++){
        sum1= sum1 + arr[i][i];
        sum2 = sum2 + arr[i][size-(i+1)];
    }
    diff = sum1 - sum2;
    if (diff < 0){
        diff = diff * (-1);
    }
    return diff;
}