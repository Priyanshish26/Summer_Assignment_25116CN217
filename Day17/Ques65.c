#include <stdio.h>

// Write a program to Merge arrays. 

void merge_Array(int arr1[], int n1, int arr2[], int n2);

int main(){
    int a;
    printf("Enter size of array 1: ");
    scanf("%d", &a);

    int Array1[a];
    printf("Enter a sorted array 1:\n");
    for(int i=0; i<a; i++){
         scanf("%d", &Array1[i]);
    }

    int b;
    printf("Enter size of array 2: ");
    scanf("%d", &b);

    int Array2[b];
    printf("Enter a sorted array 2:\n");
    for(int i=0; i<b; i++){
         scanf("%d", &Array2[i]);
    }

    merge_Array(Array1, a, Array2, b);

    return 0;
}

void merge_Array(int arr1[], int n1, int arr2[], int n2){

    int i=0, j=0, k=0;
    int new_Array[n1+n2];

    while(i<n1 && j<n2){
    if(arr1[i]<arr2[j]){
        new_Array[k]=arr1[i];
        i++;
    } else{
        new_Array[k]=arr2[j];
        j++;
    }
    k++;

    }

    if(i<n1){
        while(i<n1){
            new_Array[k]=arr1[i];
            i++;
            k++;
        }
    }

    if(j<n2){
        while(j<n2){
            new_Array[k]=arr2[j];
            j++;
            k++;
        }
    }

    printf("The merged array is : \n");
    for(int a=0; a<k; a++){
        printf("%d ", new_Array[a]);
    }
}