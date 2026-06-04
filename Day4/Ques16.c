#include <stdio.h>
#include <math.h>

void printArmstrong(int start , int end);

int main(){
    int start, end;
    printf("Enter the range\n");
    printf("Start of range:");
    scanf("%d", &start);
     printf("End of range:");
    scanf("%d", &end);
    
   
    printArmstrong(start,end);
    return 0;
}

void printArmstrong(int start, int end){
    int originalnum, num, newnum, rem, count;
    printf("The Armstrong numbers are : ");

    for(int i=start; i<=end ;i++){
        originalnum = i;
        num = i;
        newnum=0;
        count=0;
        // to count the digits
        while(num != 0){
            num /= 10;
            count ++;     
       }
       num = i;

       
       while(num != 0){
        rem = num%10;
        newnum = newnum + (int)round(pow(rem, count));
        num /= 10;
       }
      
       if(newnum == originalnum){
        printf("%d ", originalnum);
       }
       
    }
}