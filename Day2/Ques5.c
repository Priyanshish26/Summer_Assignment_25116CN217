#include <stdio.h>

int main(){
    //Write a program to Find sum of digits of a number.

    int num , sum =0, remainder;
    printf("Enter any number : ");
    scanf("%d", &num);

while(num!=0){
    remainder = num % 10;
    sum = sum + remainder;
    num = num / 10;

} 
printf("Sum of digits of a number is : %d" , sum);

return 0 ;
}