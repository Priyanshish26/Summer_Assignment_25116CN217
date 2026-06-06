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
    int rem, i, j, count=0;
    int binary[32];
    // decimal into binary 
   for(i = 0; num != 0; i++){
        rem = num%2;
        binary[i]=rem;
        num = num/2;

        // to count set bits
    if(binary[i]== 1){
        count++;
    }
}

printf("The count of Set bits of a number is %d", count);
}