#include <stdio.h>

// Q19 Write a program to Print factors of a number. 

void factorofnum(int n);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    factorofnum(num);
    return 0 ;
}

void factorofnum(int n){
    printf("The factors of %d are : ", n);
    for(int i = 1; i<= n; i++){
        if(n%i == 0){
            printf("%d, ", i);
        }
    }
}