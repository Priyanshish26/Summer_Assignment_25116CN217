#include <stdio.h>

// Write a program to Rotate array right. 

int main(){
    int n, r;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // To input no. of times to rotate an array right
    printf("Enter no. of times: ");
    scanf("%d", &r);

   for(int i=0; i<r; i++){
        int temp = arr[n-1];
        for(int j=n-1; j>0; j--){
            arr[j]=arr[j-1];
        }
        arr[0] = temp;
    }
    printf("The array after right rotation:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}