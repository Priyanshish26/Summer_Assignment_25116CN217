#include <stdio.h>

// Write a program to Write function for palindrome. 

void Palindrome(int n);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Palindrome(num);
    return 0;

}
void Palindrome(int n){
    int rem, originalnum, newnum=0;
    originalnum=n;
    while(n > 0){
        rem = n%10;
        newnum = newnum*10 + rem;
        n/=10;
    }
    if(newnum == originalnum){
        printf("Number is palindrome.");
    }else{
         printf("Number is not palindrome.");
    }
}