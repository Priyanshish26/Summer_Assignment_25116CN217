#include <stdio.h>

//Write a program to Find LCM of two numbers. 

void LCM(int a , int b);

int main(){
int a , b ;
printf("Enter two numbers :\n");
scanf("%d %d", &a, &b);
LCM(a, b);
    return 0 ;
}

void LCM (int a, int b){
int i, temp;
for(i =(a>b ? a : b); ; i++){
    if(i%a == 0 && i%b == 0){
        temp = i ;
        break ; 
    }
}
printf("LCM of two numbers %d and %d is %d", a,b, temp);

}