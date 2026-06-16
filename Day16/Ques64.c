#include <stdio.h>
//Write a program to Remove duplicates from array.

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

     int k =0, found;
    int unique[n];
   
    for(int i=0; i<n; i++){
        found =0;
        for(int j=0; j<k; j++){
           
        if(arr[i] ==unique[j]){
            found = 1;
        
        }
    }
    if(found == 0){
        unique[k] = arr[i];
            k++;
    }
}

    int size = sizeof(unique)/sizeof(int);
    printf(" The size of unique is %d \n", size);

    printf("The unique array is:\n");
    for(int i=0; i<k; i++){
        printf("%d ",unique[i]);
    }
    return 0;
}