#include <stdio.h>

//Q23 Write a program to Count set bits in a number. 

void countsetbits(int num);
int main(){
int num;
printf("Enter a number : ");
scanf("%d", &num);
countsetbits(num);
return 0;
}
void countsetbits(int num){
   
    int count =0;
    while(num>0){
    if(num%2 == 1){
        count++;
       
    }
     num/=2;
}

printf("The count of Set bits of a number is %d", count);
}