#include <stdio.h>

//Write a program to Linear search. 

int main(){
    int n, flag;
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

    for(int i=0; i<n; i++){
        flag =0;
        if(arr[i] == element){
           flag =1; 
           break;
        }
        else{
            flag = 0;
        }
    }
    if(flag == 1){
        printf("Element found");
    }else{
        printf("Element not found");
    }

    return 0;
}