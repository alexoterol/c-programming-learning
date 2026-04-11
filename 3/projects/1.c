#include <stdio.h>
int main(void)
{
    int mm;
    int dd;
    int yyyy;

    printf("Write your date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("\nYou entered the date: %d%d%d\n\n", yyyy,mm,dd);
    return 0;
}
