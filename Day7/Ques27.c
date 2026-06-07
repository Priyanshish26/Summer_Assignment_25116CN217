#include <stdio.h>

// Q27 Write a program to Recursive sum of digits. 

int Sumofdigits(int num);

int main(){
    int num ;
    printf("Enter a number(n) : ");
    scanf("%d", &num);
    printf("The Recursive sum of digits is : %d", Sumofdigits(num));
    return 0;
}

int Sumofdigits(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    int rem= 0;
    rem = num%10;
    num = num/10;
    return rem+Sumofdigits(num);
}