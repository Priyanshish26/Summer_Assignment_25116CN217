#include <stdio.h>

// Write a program to Find duplicates in array. 

int main(){
    int n, flag;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    
    for(int i=0; i<n; i++){
        int count =1;

        int Printed =0;
        for(int j=1; j<i; j++){
            if(arr[i] == arr[j]){
                Printed =1;
                break;
            }
        }

        if(Printed == 1){
            count;
        }

        for(int j=1+i; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
    }

    if(count >1){
        printf("Duplicate element is %d ", arr[i]);
    }
}
  return 0;
}