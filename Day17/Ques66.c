#include <stdio.h>

//Write a program to Union of arrays. 

void union_Array(int arr1[], int n1, int arr2[], int n2);

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

    union_Array(Array1, a, Array2, b);

    return 0;
}

void union_Array(int arr1[], int n1, int arr2[], int n2){

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

    int unique[k];
    int u=1;
     unique[0]=new_Array[0];


    for(int i=1; i<k; i++){
       if(new_Array[i] != new_Array[i-1]){
        unique[u]=new_Array[i];
        u++;
       }
    }
    printf("The union of array is : \n");
    for(int a=0; a<u; a++){
        printf("%d ", unique[a]);
    }
}