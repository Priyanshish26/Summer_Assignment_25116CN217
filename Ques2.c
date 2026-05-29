#include <stdio.h>

// Write a program to Reverse a number. 

int main() {

    int num, remainder, rev=0;
    
    printf("Enter a number to reverse : ");
    scanf("%d", &num );

    while(num!=0){
        remainder = num%10;
        rev = rev*10 + remainder ;
        num = num/10;
    }

    printf("Reversed number is %d", rev);

    return 0 ;
}