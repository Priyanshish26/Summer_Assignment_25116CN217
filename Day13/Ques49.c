#include <stdio.h>

// Write a program to Input and display array. 

int main(){
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int arr[n];

    //input an array
    printf("Enter the elements of an array.\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Display an array
    printf("The entered array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}