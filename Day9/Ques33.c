#include <stdio.h>

int main(){
    int num;
    printf("Enter no. of rows: ");
    scanf("%d", &num);

    for(int i=num; i>=0; i--){
        for(int j=i; j>=0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}