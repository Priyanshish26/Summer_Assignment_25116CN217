#include <stdio.h>

// Q29 Write a program to Print half pyramid pattern. 

int main(){
    int num;
    printf("Enter no. of rows : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        for(int j= 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}