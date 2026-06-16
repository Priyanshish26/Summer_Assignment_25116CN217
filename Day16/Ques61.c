#include <stdio.h>
//Write a program to Find missing number in array. 

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
    }

    // To find missing elements

    int Exp_sum = n*(n+1)/2;
    int Sum = 0;
    for(int i=0; i<n-1; i++){
        Sum += arr[i];
    }
    int Missing_num = (Exp_sum - Sum);

    printf("The missing number is: %d", Missing_num);
    return 0;
}