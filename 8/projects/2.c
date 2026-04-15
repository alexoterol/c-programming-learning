#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    int digit_repeated[10] = {0};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit]){
            digit_repeated[digit]++;
        }
        digit_seen[digit] = true;
        if (digit_repeated[digit] == 0) {
            digit_repeated[digit] = 1;
        }
        n /= 10;
    }

    printf("Digits:\t\t");
    for (int i = 0 ; i<10 ; i++){
        printf("  %d", i);
    }

    printf("\nOcurrences: \t");
    for (int i = 0 ; i<10 ; i++){
        printf("  %d", digit_repeated[i]);
    }
    printf("\n");

    return 0;
}