#include <stdio.h>

// Write a program to Find sum and average of array. 

int main(){
    int n, sum=0;
    float avg;
    printf("Enter the size of an array: ");
    scanf("%d" , &n);
    int arr[n];

    //input an array
    printf("Enter the elements of an array.\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // printf sum
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    printf("The sum of an array is %d \n", sum);

    avg = (float)sum/n;
    printf("The avarage of an array is: %f", avg);

    return 0;
}