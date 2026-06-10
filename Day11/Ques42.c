#include <stdio.h>

// Write a program to Write function to find maximum. 

void Max(int a, int b);

int main(){
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    Max(a,b);
    return 0;
}

void Max(int a, int b){
    if(a>b){
        printf("The maximum of two numbers is %d", a);
    }else{
        printf("The maximum of two numbers is %d", b);
    }
}

