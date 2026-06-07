#include <stdio.h>

//Q25 Write a program to Recursive factorial.

int Factorial(int n);

int main(){
    int num;
    printf("Enter a number n to calculate Factorial: ");
    scanf("%d", &num);
    printf("Factorial of num %d is %d.", num, Factorial(num));

    return 0;
}

int Factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    
    int Factn = n*Factorial(n-1);
    return Factn;
}