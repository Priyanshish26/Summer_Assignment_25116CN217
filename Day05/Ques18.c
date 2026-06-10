#include <stdio.h>

//Q18 Write a program to Check strong number. 

void strongnum(int n);

int main(){
    int num; 
    printf("Enter a number : ");
    scanf("%d", &num);
    strongnum(num);
    return 0;
}

void strongnum(int n){
    int num, fact, sum = 0, rem;
    num =n;
    while(num != 0){
        rem = num%10;
        fact =1;
        for(int i =1; i<= rem; i++){
            fact*= i;
        }
        sum += fact ;
        num = num/10;
        fact = 1;
    }
    if(sum == n){
        printf("The number %d is a strong number.", n);
    }
    else{
        printf("The number %d is not a strong number.", n);
    }
    
}