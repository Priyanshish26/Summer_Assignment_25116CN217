#include <stdio.h>
//#include <math.h>

// Write a program to Print prime numbers in a range. 

int main(){
    int Rstart, Rend, Flag ,i;
    
    
    // Enter range 
    printf("Enter the range : \n");
    scanf("%d %d", &Rstart, &Rend);
    printf("Prime numbers in this range are :\n");

     // checking all numbers in the range
    for(i = Rstart; i<= Rend; i++){
        if(i<1)    //  numbers less than or equal to 1 are not prime.
            continue;

         Flag = 1; // Assuming number is Prime

       
        for(int j=2; j<i ; j++){
            if(i%j == 0){
                Flag = 0;
                break ;
            }
        } 
    
       if(Flag == 1){
         printf("%d ", i);
       }
    }
    

    return 0;
}