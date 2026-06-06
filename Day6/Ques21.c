#include <stdio.h>

// Q21 Write a program to Convert decimal to binary.

void decimaltobinary(int n);

int main(){
int num;
printf("Enter a decimal number to convert it to binary : ");
scanf("%d", &num);
decimaltobinary(num);
return 0;   
    
}

void decimaltobinary(int n){
    int rem, i, j;
    int binary[32];
    printf("The binary number of decimal number %d is : ", n);
   for(i = 0; n != 0; i++){
        rem = n%2;
        binary[i]=rem;
        n = n/2;
    }
    for(j = i-1; j>= 0; j--){
        printf("%d", binary[j]);
    }
}