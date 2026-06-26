#include <stdio.h>

// Write a program to Merge two sorted arrays. 

void Merge_Sort(int n1, int arr1[], int n2, int arr2[]);

int main(){

    int n1;
    printf("Enter size of an array 1: ");
    scanf("%d", &n1);

    int array1[n1];
    printf("Enter the elements of sorted array 1:\n");
    for(int i =0; i<n1; i++){
        scanf("%d", &array1[i]);
    }

    int n2;
    printf("Enter size of an array 2:");
    scanf("%d", &n2);
    
    int array2[n2];
    printf("Enter the elements of sorted array 2:\n");
    for(int i =0; i<n2; i++){
        scanf("%d", &array2[i]);
    }

    // to merge two arrays
    Merge_Sort(n1, array1, n2, array2);

    return 0;
}


void Merge_Sort(int n1, int arr1[], int n2, int arr2[]){
    int new_arr[n1+n2];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            new_arr[k] = arr1[i];
            i++;
            k++;
        }else{
            new_arr[k] = arr2[j];
            j++;
            k++;
        }
        }


        while(i<n1){
            new_arr[k] = arr1[i];
            i++, k++;
        }

        while(j<n2){
            new_arr[k] = arr2[j];
            j++, k++;
        }

        printf("Merge sorted array is:\n");
        for(int i=0; i<k; i++){
            printf("%d ", new_arr[i]);
        }
    }
