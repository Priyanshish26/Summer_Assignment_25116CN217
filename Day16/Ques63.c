#include <stdio.h>

//Write a program to Find pair with given sum.

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // to find pair with given sum

    int sum;
    printf("Enter a sum: ");
    scanf("%d", &sum);

    int calculated_sum  ;

    for(int i=0; i<=n/2; i++){
        for(int j=0; j<n; j++){
            calculated_sum = arr[i]+arr[j];

            if(calculated_sum == sum){
                printf("The pair is %d and %d\n",arr[i], arr[j]);
               
            }
        }
    }

   
   return 0;
}