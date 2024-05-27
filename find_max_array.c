//this code determines the maximum element of an array

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, max, size;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array\n");

    for (i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i=1;i<size;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    printf("The maximum value in the array is %d", max);
}

//similarly you can develop code for determining the minimum of an array
