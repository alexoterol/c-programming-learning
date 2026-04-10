#include <stdio.h>

int polynomial(int i){
    return ((((3*i + 2)*i - 5)*i - 1)*i + 7)*i - 6;
}

int main(void) {
    printf("%d", polynomial(32));
    return 0;
}