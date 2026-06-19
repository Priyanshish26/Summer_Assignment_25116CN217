#include <stdio.h>

// Write a program to Transpose matrix.

int main(){
    // to input size of matrix
    int row, col;
    printf("Enter size of matrix 1: ");
    scanf("%d%d", &row, &col);
    int A[row][col];
    
    
     // To input matrix A elements  
    printf("Enter the elements of matrix 1\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &A[i][j]);
        }
        
    }

    int B[row][col];
    // To transpose a matrix
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i == j){
                B[i][j] = A[i][j];
            }else{
                B[i][j] = A[j][i];
            }
        }
    }

    // To print Transpose of a matrix
     printf("Transpose of matrix 1\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}