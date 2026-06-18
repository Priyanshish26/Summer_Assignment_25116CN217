#include <stdio.h>

// Write a program to Selection sort.

void Selection_sort(int arr[], int n);

int main(){

    // To input size of an array
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    //To input array
    int Array[n];
    printf("Enter the elements of an array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &Array[i]);
    }

    Selection_sort(Array, n);

    return 0;
}

void Selection_sort(int arr[], int n){
    int smallest;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            smallest=i;
            if(arr[smallest]>arr[j]){
                smallest = j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=temp;
    }

    // To print sorted array
    printf("Sorted array is\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

