#include <stdio.h>

// Write a program to Reverse array. 

int main(){
    int n, flag;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // To reverse an array

    for(int i=0; i<= n/2; i++){
        int temp = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i]= temp;
    }

    // To print reversed array

    printf("The reversed array:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

