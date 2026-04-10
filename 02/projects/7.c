#include <stdio.h>

int main(void){
    int amount;
    int num;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);
    num = amount / 20;
    printf("\n20$ bill: %d\n", num);
    amount = amount % 20;
    num = amount / 10;
    printf("10$ bill: %d\n", num);
    amount = amount % 10;
    num = amount / 5;
    printf("5$ bill: %d\n", num);
    amount = amount % 5;
    printf("1$ bill: %d\n", amount);
    printf("\n\n\n");

}