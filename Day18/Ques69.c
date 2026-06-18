#include <stdio.h>

// Write a program to Bubble sort. 

void Bubble_sort(int arr[], int n);

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

    Bubble_sort(Array, n);

    return 0;
}

void Bubble_sort(int arr[], int n){

    // Bubble sort 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // To print sorted array
    printf("Sorted array is\n");
    for(int  i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}