#include <stdio.h>

//Write a program to Check whether a number is palindrome.


int main(){
    int num, remainder, rev=0, originalnum;
    printf("Enter a number : ");
    scanf("%d", &num);

    originalnum = num;

    while(num!=0){
        remainder = num%10;
        rev = rev*10 + remainder;
        num/=10;
    }
    if(originalnum == rev)
    {printf("%d is a palindrome.", originalnum);}
    else
   {printf("%d is not a palindrome.", originalnum);}
    return 0;
}