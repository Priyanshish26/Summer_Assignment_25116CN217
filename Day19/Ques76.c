#include <stdio.h>

// Write a program to Find diagonal sum. 

int main(){
    // to input size of matrix
    int row, col;
    printf("Enter rows and columns\n");
    scanf("%d%d", &row ,&col);

    int A[row][col];
    //To input Matrix elements
    printf("Enter the elements of Matrix A\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           scanf("%d",&A[i][j]);
        }
    }

    // To calculate sum of matrix
    int sum =0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
             if(i==j){
                sum += A[i][j];
            }
        }
    }

    // To print sum
    printf("The sum of Diagonal elements is %d", sum);

    return 0;
}