#include <stdio.h>

// Q26 Write a program to Recursive Fibonacci. 

int Fib(int n);

int main(){
    int num;
    printf("Enter a number to print a series of Fibonacci: ");
    scanf("%d", &num);
    printf("The Fibonacci series is : ");
    for(int i = 0; i<num ; i++){
        printf("%d ", Fib(i));
    }
    return 0;
}

int Fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return Fib(n-1)+Fib(n-2);
}