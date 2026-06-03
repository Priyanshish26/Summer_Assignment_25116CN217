#include <stdio.h>

//Write a program to Find nth Fibonacci term.
int Fib (int n);

int main(){
int n;
printf ("Enter the nth term ofFibonacci series: ");
scanf("%d", &n);
printf("The %d term of Fibonacci series is : %d", n ,Fib(n));
return 0;
}

int Fib(int n){
    if(n == 0){
       return 0;
    }
    if(n == 1){
        return 1 ;
    }
    
    int FibN = Fib(n-1)+Fib(n-2);

    return FibN;

}