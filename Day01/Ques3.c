#include <stdio.h>

int main(){
    //Write a program to Find factorial of a number. 

    int num , fact =1;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    while(num>0){
        fact*=num ;
          num--;
   } 
   printf("The factorial of a number is %d ", fact);
return 0 ;
}