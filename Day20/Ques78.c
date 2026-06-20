#include <stdio.h>

// Write a program to Check symmetric matrix.

void Symmetric_Matrix(int row, int col, int mat[row][col]);

int main(){

    // To input rws and columns
    int row, col;
    printf("Enter no. of rows and columns: ");
    scanf("%d%d", &row, &col);

    // To input matrix 
    int Matrix[row][col];
    printf("Enter the elements of matrix\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &Matrix[i][j]);
        }
    }

    Symmetric_Matrix(row, col, Matrix);

    return 0;
}

void Symmetric_Matrix(int row, int col, int mat[row][col]){

    // To check symmetricity of matrix
    int matched ;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            
            if(mat[i][j]==mat[j][i]){
                matched =1;
            }else{
                matched =0;
                break;
            }
        }
    }

    if(matched == 1){
        printf("Matrix is symmetric");
    }else{
        printf("Matrix is not symmetric");
    }
}