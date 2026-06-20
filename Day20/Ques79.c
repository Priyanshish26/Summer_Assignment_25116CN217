#include <stdio.h>

// Write a program to Find row-wise sum. 

void Row_wise_sum(int row, int col, int mat[row][col]);

int main(){
    // To input no. of rows and columns
    int row, col;
    printf("Enter no. of rows and columns: ");
    scanf("%d%d", &row, &col);

    // To input the elements of a matrix
    int matrix[row][col];
    printf("Enter the elements of the matrix\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    Row_wise_sum(row, col, matrix);

    return 0;

}

void Row_wise_sum(int row, int col, int mat[row][col]){
    int sum;
    for(int j=0; j<row; j++){
        sum =0;
        for(int i=0; i<col; i++){
            sum += mat[j][i];
        }

        printf("Sum of %d row is %d\n", j+1, sum);
    }
}