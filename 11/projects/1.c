#include <stdio.h>

void pay_amount(int, int *, int *, int *, int *);

int main(void) {

    int money = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &money);

    pay_amount(money, &twenties, &tens, &fives, &ones);

    printf("20: %d\n10: %d\n5: %d\n1: %d\n",twenties,tens,fives,ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    dollars -= 20 * (dollars/20);
    *tens = dollars / 10;
    dollars -= 10 * (dollars/10);
    *fives = dollars / 5;
    dollars -= 5 * (dollars/5);
    *ones = dollars / 1;
}
