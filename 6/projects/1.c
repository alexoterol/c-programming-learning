#include <stdio.h>
int main(void)
{
    float input;
    float max_num = 0.0;
    do{
        printf("Enter a number: ");
        scanf("%f", &input);
        if ( input > max_num ){
            max_num = input;
        }
    } while(input>0);
    printf("%f", max_num);
    return 0;
}
