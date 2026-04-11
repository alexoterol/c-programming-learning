#include <stdio.h>
int main(void)
{
    int item_number;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("\nEnter unit price: ");
    scanf("%f", &unit_price);

    int mm;
    int dd;
    int yyyy;

    printf("\nEnter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("\nItem\tUnit\tPurchase");
    printf("\nPrice\tDate\n");
    printf("\n\t%d\t$%4.2f\t%d/%d/%d", item_number, unit_price, mm,dd,yyyy);
    return 0;
}
