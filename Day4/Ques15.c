#include <stdio.h>
// Write a program to Check Armstrong number. 




void checkarm(int n);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    checkarm(n);
    return 0;
}

void checkarm(int n){
    int count = 0, num, originalnum, rem, newnum=0;
   
    num=n;
    originalnum=n;
     // to count number of digits in in n
     while(n!=0){
        n/=10;
        count++;
     }
     for(int i=0; i<count; i++){
        rem = num%10;
        newnum = newnum + rem*rem*rem;
        num/=10;
     }
     if(newnum == originalnum){
        printf("Number is Armstrong.");

     }
     else{
        printf("Number is not Armstrong.");
     }
}
