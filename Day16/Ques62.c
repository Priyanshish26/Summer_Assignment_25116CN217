#include <stdio.h>
//Write a program to Find maximum frequency element. 

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // to find maximum frequency element

    int max_count=0, count , element, current;
    for(int i=0; i<n; i++){
        count = 0;
       
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count ++;
            }
            
        }
        if(count > max_count){
                max_count = count ;
                element = arr[i];
            }

    } 

    printf("Maximum frequency element is %d and frequency is %d", element , max_count);

    return 0;
}