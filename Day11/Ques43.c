#include <stdio.h>

// Write a program to Write function to check prime. 

void checkPrime(int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkPrime(num);
    return 0;
}

void checkPrime(int n){
    int flag =1; //Assuming n is prime
    for(int i=2; i<=n/2; i++){
        
        if(n%i == 0){
            flag=0;
            break;
        }else{
            flag=1;
        }
    }
    if(flag){
        printf("The number %d is Prime.", n);
    }else{
        printf("The number %d is not Prime.", n);
    }
}