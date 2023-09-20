#include <stdio.h>

int main() {
    int arr_count = 7;
    int arr[] = {1, -2, -7, 9, 1, -8, -5};
    int i;
    float pos, zero, neg;
    for(i = 0; i < arr_count; i++){
        if(arr[i] < 0){
            neg++;
        }
        else if(arr[i] == 0){
            zero++;
        }
        else if (arr[i] > 0) {
            pos++;
        } 
        else {
            printf("error");
        }
    }
    pos/=arr_count;
    neg/=arr_count;
    if (zero > 0){
        zero/=arr_count;
    }
    
    printf("%.6f\n", pos);
    printf("%.6f\n", neg);
    printf("%.6f", zero);
}





void plusMinus(int arr_count, int* arr) {
    int i;
    float pos, zero, neg;
    for(i = 0; i < arr_count; i++){
        if(arr[i] < 0){
            neg++;
        }
        else if(arr[i] == 0){
            zero++;
        }
        else if (arr[i] > 0) {
            pos++;
        } 
        else {
            printf("error");
        }
    }
    pos/=arr_count;
    neg/=arr_count;
    if (zero > 0){
        zero/=arr_count;
    }
    
    printf("%.6f\n", pos);
    printf("%.6f\n", neg);
    printf("%.6f", zero);
}