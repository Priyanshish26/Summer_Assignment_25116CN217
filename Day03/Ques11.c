#include <stdio.h>

// Write a program to Find GCD of two numbers.

void GCD( int a, int b);

int main(){
    int x , y ; 
    printf("Enter two numbers : \n");
    scanf("%d%d", &x, &y);
    GCD(x,y);
    return 0 ;
}

// Function for calculating GCD of two numbers 
void GCD (int x, int y){
    int a = x, b = y , temp;
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp ;
    }
    printf("%d is the gcd of two numbers %d and %d", a, x, y);

}