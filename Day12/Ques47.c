#include<stdio.h>

//Write a program to Write function for Fibonacci. 

void Fibonacci(int num);

int main(){
    int num;
    printf("Enter the no. of terms: ");
    scanf("%d", &num);

    Fibonacci(num);
    return 0;
}

void Fibonacci(int num){
    int temp, first=0, second=1;
    printf("The series is: ");
    for(int i=0; i<num; i++){
        printf("%d ", first);
        temp= second;
        second = first + second;
        first = temp;
    }
}
