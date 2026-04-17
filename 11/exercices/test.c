#include <stdio.h>

int main(void){
    int number = 1;
    int *pointer = &number; // Assign the address of number to the variable pointer. Makes pointer point to number.

    printf("%d\n", pointer);
    printf("%d\n", *pointer);
    return 0;
}