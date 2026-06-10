#include <stdio.h>

// Write a program to Write function to find sum of two numbers.

void sum(int a, int b);

int main(){
    int a, b;
    printf("Enter two numbers a and b:\n");
    scanf("%d%d", &a, &b);
    sum(a,b);
    return 0;
}

void sum(int a, int b){
    int sum = a+b;
    printf("The dum of two numbers is: %d" , sum);
}
