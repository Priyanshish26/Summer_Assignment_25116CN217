#include <stdio.h>

// Write a program to Binary search.

void Binary_search(int arr[], int n);

int main(){

    // To input size of an array
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    //To input array
    int Array[n];
    printf("Enter a sorted array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &Array[i]);
    }

    Binary_search(Array, n);

    return 0;
}

void Binary_search(int arr[], int n){
    int high=n-1, low=0;
    int mid;

    int element;
    printf("Enter an element: ");
    scanf("%d", &element);

    while(low<=high){
        mid = (high+low)/2;
        if(arr[mid]==element){
        printf("Element found");
        return ;
        }
        else if(arr[mid]<element){
           low = mid +1;
        }
        else{
            high = mid -1;
        }

    }

    printf("Element not found");
}