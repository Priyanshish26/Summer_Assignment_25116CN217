#include <stdio.h>

// Write a program to Frequency of an element. 

int main(){
    int n, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter a element: ");
    scanf("%d", &element);

    for(int i =0; i<n; i++){
        if(arr[i] == element){
            count ++;
        }
    }

    printf("The frequency of an element is %d", count);

    return 0;
}