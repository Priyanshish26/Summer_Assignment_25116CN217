#include <stdio.h>

//Q24 Write a program to Find x^n without pow().

void power(int n, int pow);

int main(){
    int n, exp;
printf("Enter a number(x) : ");
scanf("%d", &n);
printf("Enter power raised to:");
scanf("%d", &exp);
power(n, exp);
return 0;
}

void power(int n, int exp){
int prod = 1, i=1;
while(i<=exp){
    prod= prod*n;
    i++;
}
printf("Power of num %d is % d", n, prod);
}