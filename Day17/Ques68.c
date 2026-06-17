#include <stdio.h>

// Write a program to Find common elements. 

void Common_Array(int arr1[], int n1, int arr2[], int n2);

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


    Common_Array(Array1, a, Array2, b);

    return 0;
}


void Common_Array(int arr1[], int n1, int arr2[], int n2){
    int i=0,j=0,k=0;
    int new_Array[n1+n2];

    while(i<n1 && j<n2){
        if(arr1[i] == arr2[j]){
            new_Array[k]=arr1[i];
        
        i++;
        j++;
        k++;
        }

        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    if(k == 0){
        printf("No intersection elements.");
    }else{
        for(int a=0; a<k; a++){
        printf("%d ", new_Array[a]);
    }
    }
    
}