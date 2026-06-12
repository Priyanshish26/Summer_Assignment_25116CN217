#include <stdio.h>
#include <math.h>

// Write a program to Write function for Armstrong. 

void Armstrong(int n);

int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    Armstrong(num);
    return 0;
}
void Armstrong(int n){
    int rem, originalnum, newnum=0, num;
    int count=0;
    originalnum=n;
    num=n;
    while(n>0){
        n/=10;
        count ++;
    } 
    for(int i=1; i<=count; i++){
        rem= num%10;
        newnum=newnum+(int)round(pow(rem, count));
        num/=10;
    }
    printf("%d\n", newnum);
    if(newnum == originalnum){
        printf("Number is Armstrong");
    }else{
        printf("Number is not Armstrong");
    }
}