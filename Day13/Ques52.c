#include <stdio.h>

// Write a program to Count even and odd elements.

void check(int array[], int size);

int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    check(arr, n);
    return 0;
}

void check(int array[], int size){
    int evencount=0, oddcount=0 ;

    for(int i=0; i<size ; i++){
        if(array[i]%2 == 0){
          evencount++;  
        }else{
            oddcount++;
        }

    }

    printf("The even count of elements is %d.\n", evencount);
    printf("The odd count of elements is: %d.",oddcount);
}