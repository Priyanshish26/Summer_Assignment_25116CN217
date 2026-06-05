#include <stdio.h>

//Q17 Write a program to Check perfect number. 

void perfectnum(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    perfectnum( n);
    return 0;
}

void perfectnum(int n){
    int div =0, num = n;
    for(int i =1; i<=n/2; i++){
        if(n%i == 0){
            div += i;
        }
    }
    if(div == num){
        printf("The number %d is a perfect number.", num);
    }
    else{
        printf("The number %d is not a perfect number.", num);
    }
    }
