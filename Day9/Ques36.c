#include <stdio.h>

int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i==1||i==n){
            for(int j=0; j<n; j++){
                printf("*");
            }
            printf("\n");
            
        }else{
               for(int j=1; j<=n; j++){
                if(j==1||j==n){
                    printf("*");
                }else{
                    printf(" ");
                }
               } 
               printf("\n");
            }
    }

    
    return 0;
}