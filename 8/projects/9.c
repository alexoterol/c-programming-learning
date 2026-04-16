#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_MAX 4
#define MATRIX_LENGHT 10
#define CHAR_VAR 26

int main(void){
    char matrix[MATRIX_LENGHT][MATRIX_LENGHT] = {{'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'},
                                                {'.','.','.','.','.','.','.','.','.','.'}
    };

    int direction; // 0 = UP | 1 = DOWN | 2 = RIGHT | 3 = LEFT
    bool right, up, left, down = 0;
    char letter = 65; // 65 = A
    int row = 0;
    int column = 0;
    
    srand((unsigned) time(NULL));
    
    matrix[row][column] = letter++;
    while (letter <= 'Z') {
        up = down = left = right = direction = 0;

        if (column + 1 < MATRIX_LENGHT && matrix[row][column + 1] == '.')
            up = 1;
        if (column - 1 >= 0 && matrix[row][column - 1] == '.')
            down = 1;
        if (row + 1 < MATRIX_LENGHT && matrix[row + 1][column] == '.')
            right = 1;
        if (row - 1 >= 0 && matrix[row - 1][column] == '.')
            left = 1;

        if (up + down + left + right == 0)
            break;

        direction = rand() % NUM_MAX;
        

        /* Intentional fallthrough if direction fails */
        switch(direction) {
            case 0:
                if (up) {
                    matrix[row][++column] = letter++;
                    break;
                }
            case 1:
                if (down) {
                    matrix[row][--column] = letter++;
                    break;
                }
            case 2:
                if (right) {
                    matrix[++row][column] = letter++;
                    break;
                }
            case 3:
                if (left) {
                    matrix[--row][column] = letter++;
                    break;
                }
            default:
                break;
        }
    }

    for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            printf("%c ", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}