#include <stdio.h>

// Write a program to Print repeated-number 
// pattern. 
// 1 
// 22 
// 333 
// 4444 
// 55555

int main (){
    int n; 
    printf("Enter no. of rows : ");
    scanf("%d", &n);

    for(int i=1; i<= n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}