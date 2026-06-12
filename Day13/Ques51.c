#include <stdio.h>

// Write a program to Find largest and smallest element. 

int main(){
    int n; 
    int largest, smallest;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array :\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

   largest = arr[0];
   smallest = arr[0];

   for(int i=1; i<n; i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
    if(arr[i]< smallest){
        smallest = arr[i];
    }
   
   }
   printf("Largest in array is %d\n", largest);
   printf("Smallest in array is %d", smallest);
   return 0;

}