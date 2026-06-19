#include <stdio.h>

// Write a program to Add matrices.


int main(){
    // to input size of matrix
    int n1,m1;
    printf("Enter size of matrix 1: ");
    scanf("%d%d", &n1, &m1);
    int A[n1][m1];
    int B[n1][m1];


    
     // To input matrix A elements  
    printf("Enter the elements of matrix 1\n");
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            scanf("%d", &A[i][j]);
        }
        
    }

     // To input matrix B elements
    printf("Enter the elements of matrix 2\n");
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
             scanf("%d", &B[i][j]);
        }
       
    }

    int C[n1][m1];
    // to add two matrix
        for(int i=0; i<n1; i++){
            for(int j=0; j<m1; j++){
                C[i][j] = A[i][j]+B[i][j];
            }
        }
    
    // To print Matrix c
    printf("Sum of two matrix is:\n");
    for(int i=0;i<n1; i++){
        for(int j=0; j<m1; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

   
    return 0;
    
}

void Sum_Array(int n, int m, int A[n][m], int B[n][m]){
    
    
   
}