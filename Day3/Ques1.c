#include <stdio.h>
#include <math.h>

// Write a program to Check whether a number is prime. 

int main(){
    int num , flag = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num <= 1){
       flag = 1;
    }else{

    for( int i =2; i <=sqrt(num) ; i++){
       if(num%i == 0){
        flag = 1;
        break ;
       } 
    }
}

       if( flag == 0){
        printf("%d is a prime number", num);    
    }else{
        printf("%d is not a prime number", num);
    }
    

    return 0;
}