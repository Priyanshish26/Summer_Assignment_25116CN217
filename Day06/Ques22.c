#include <stdio.h>
#include <math.h>

//Q22 Write a program to Convert binary to decimal.

void binaryintodecimal(int n);

int main(){
    int num;
    printf("Enter a binary number :");
    scanf("%d", &num);
    binaryintodecimal(num);
    return 0 ;
}

void binaryintodecimal(int n){
    int count =0, rem, dec=0;
   
   while(n!=0){
        rem = n%10;
        dec = dec + rem*pow(2,count);
        count ++ ;
        n = n/10;

    }
    printf("The decimal number is %d", dec);
}