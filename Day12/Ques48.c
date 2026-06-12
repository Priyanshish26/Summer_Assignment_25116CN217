#include <stdio.h>

// Write a program to Write function for perfect number.

void Perfectnum(int n);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    Perfectnum(num);
    return 0;
}

void Perfectnum(int n){
    int oldnum, newnum=0;
    oldnum = n;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            newnum += i;
        }
    }
    printf("Newnum is: %d\n", newnum);
    if(oldnum == newnum){
        printf("Number is Perfect.");
    }else{
         printf("Number is not Perfect.");
    }
}