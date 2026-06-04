#include <stdio.h>

//Write a program to Generate Fibonacci series. 
int Fibonacci(int n);
void Fib(int n);

int main(){
    int n ; 
    printf("Enter the number of terms of Fibonacci Series : ");
    scanf("%d", &n);
    //Fib(n);
    printf("The Fibonacci Series is : ");
    for(int i = 0; i <= n; i++){
        printf("%d ", Fibonacci(i));
    }
    return 0;
}

// using Recursion 
int Fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1 ;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

// using Iteration 
void Fib(int n){
    int first = 0, second = 1, temp ;
    printf("Fibonacci series ; \n");
    for(int i = 0; i<=n; i++){
        printf("%d ", first );
        temp = first + second  ;
        first = second ;
        second = temp ;
        
    }
}