#include <stdio.h>

int main()
{
    int arr[] = {{1, 2, 3},
                 {4, 5, 6},
                 {7, 8, 9}};

    // Get total number of elements in array
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size > 0)
    {
        // Get last element of array
        int lastElem = arr[size - 3];
        printf("Last Element of Array is: %d \n", lastElem);
    }
    else
    {
        printf("Array is Empty \n");
    }

    return 0;
}