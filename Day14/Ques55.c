#include <stdio.h>
#include <limits.h>

// Write a program to Second largest element. 

void Seclargestelement(int arr[], int n);

int main(){
    int n, flag;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int largest , seclargest;
    
    largest = INT_MIN;
    seclargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]> seclargest  && arr[i] != largest) {
            seclargest=arr[i];
        }
    }
    if(seclargest == INT_MIN){
        printf("No second largest element");
    }else{
        printf("The second largest element is %d", seclargest);
    }
    
   
    return 0;
}

void Seclargestelement(int arr[], int n){
    // using bubble sort

    for(int i=0; i<n; i++){
        for(int j=0;j<n-1; j++){
        if( arr[j+1]<arr[j]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    }

   
    printf("The second largest element is %d", arr[n-2]);   
}
