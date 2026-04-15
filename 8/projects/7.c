#include <stdio.h>

#define MATRIX_SIZE 5

int main(void){
    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {{0},{0}};
    // MATRIX:
    // (0 0) (0 1) (0 2) (0 3) (0 4)
    // (1 0)
    // (2 0)
    // (3 0)
    // (4 0) (4 1) (4 2) (4 3) (4 4)
    //
    
    for (int i = 0 ; i < MATRIX_SIZE ; i++){
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3],&matrix[i][4]);
    }

    printf("Row totals: ");
    for (int i = 0 ; i < MATRIX_SIZE ; i++){
        printf("%d ", matrix[i][0] + matrix[i][1] + matrix[i][2] + matrix[i][3] + matrix[i][4]);
    }

    printf("\nColumn totals: ");
    for (int i = 0 ; i < MATRIX_SIZE ; i++){
        printf("%d ", matrix[0][i] + matrix[1][i] + matrix[2][i] + matrix[3][i] + matrix[4][i]);
    }
    printf("\n");

    return 0;
}