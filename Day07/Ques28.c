#include <stdio.h>

//Q28 Write a program to Recursive reverse number. 

void Reversenum(int num);

int main(){
    int num ; 
    printf("Enter a number to reverse : ");
    scanf("%d", &num);
    printf("The reverse of a number is  ");
    Reversenum(num);
    return 0;
}

void Reversenum(int num){
    if(num == 0){
        return ;
    }
    
    printf("%d", num%10);
     Reversenum(num/10);

}