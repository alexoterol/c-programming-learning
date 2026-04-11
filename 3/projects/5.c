#include <stdio.h>
int main(void)
{
    int a,b,c,d,
        e,f,g,h,
        i,j,k,l,
        m,n,o,p;

    printf("Enter the number from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p, 
                                                                                    a+e+i+m, b+f+g+h, i+j+k+l, m+n+o+p,
                                                                                    a+f+k+p, d+g+j+m);
    return 0;
}
