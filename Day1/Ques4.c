#include<stdio.h>

int main(){
    //Write a program to Count digits in a number. 

    int num , count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        num/=10;
        count ++;
    }

    printf("The count of digits in a number is %d " , count);

    return 0;
}