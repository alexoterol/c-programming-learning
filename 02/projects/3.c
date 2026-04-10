#include <stdio.h>

int main(void) {
    int radio;
    printf("Radius Please: ");
    scanf("%d", &radio);
    printf("Sphere volume: %.2f cubic meters\n", 4.0f/3.0f * 3.14f * radio *radio *radio);
    return 0;
}