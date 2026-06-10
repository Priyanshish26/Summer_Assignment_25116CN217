#include <stdio.h>

// Write a program to Print character pyramid.

int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    
    
    for(int i=0; i<n; i++){
        char ch = 'A';
    for(int j=n-i; j>0; j--){
    printf("  ");
    }
    for(int j=1; j<=i+1; j++){
    printf("%c ", ch);
    ch++;
    }
    ch-=2;
    for(int j=i; j>0; j--){
    printf("%c ", ch);
    ch--;
}

printf("\n");
}
return 0; 
}





