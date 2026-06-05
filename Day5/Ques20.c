#include <stdio.h>

// Q19 Write a program to Print factors of a number. 

void factorofnum(int n);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    factorofnum(num);
    return 0; 
}

void factorofnum(int n){
    int flag, greatest=0;
    for(int i=1; i<=n; i++){
       
        if(n%i == 0){
             flag = 1;
             if(i == 1)
             flag = 0;
             else{
                for(int j=2; j<= i/2 ; j++){
                    if(i%j == 0){
                        flag = 0;
                        break;
                    }
                }
             }
             if(flag)
        greatest = i;
        }
        
    }
    printf("Greatest prime factor is: %d ", greatest);
}