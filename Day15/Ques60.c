#include <stdio.h>

// Write a program to Move zeroes to end. 

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pos =0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos++;   
        }
    }

    while(pos < n){
        arr[pos] = 0;
        pos ++;
    }
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}