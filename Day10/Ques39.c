#include <stdio.h>

// // Write a program to Print number pyramid.

int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d", &n);
for(int i=0; i<n; i++){
    for(int j=n-i; j>0; j--){
    printf("  ");
}
for(int j=1; j<=i+1; j++){
    printf("%d ", j);
}
for(int j=i; j>0; j--){
    printf("%d ", j);
}
printf("\n");
}

return 0;

}