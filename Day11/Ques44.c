#include <stdio.h>

//Write a program to Write function to find factorial. 

void Factorial(int n);
int main(){
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);
    Factorial(num);
    return 0;
}

void Factorial(int n){
    int fact =1;
   
    for(int i=1; i<=n; i++){
        fact *= i;
       
        }
        printf("The Factorial of %d is %d.", n, fact);
}
