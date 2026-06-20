#include <stdio.h>

// Write a program to Multiply matrices.

int main(){
    // To input size of matrix A
    int row1, col1;
    printf("Enter the size of Matrix A :\n");
    scanf("%d%d", &row1 ,&col1);
    int A[row1][col1];

    //To input size of matrix B
    int row2, col2;
    printf("Enter the size of Matrix B :\n");
    scanf("%d%d", &row2, &col2);
    int B[row2][col2];

    if(col1 != row2){
        printf("Not valid\n");
        return 0;
    }

    // To input elements of Matrix A
    printf("Enter the elements of matrix A\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            scanf("%d", &A[i][j]);
        }
    }

    // To input elements of Matrix B
    printf("Enter the elements of Matrix B\n");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    // To multiply two matrices
    int C[row1][col2];
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){

            C[i][j]=0;
            for(int k=0; k<row2; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    // To print Multiplication of matrix
    printf("The product of two matrices is\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}