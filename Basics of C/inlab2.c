#include <stdio.h>

void add(int a[2], int b[2])
{
    printf("\n%d%+di",a[0]+b[0],a[1]+b[1]);
}

void sub(int a[2], int b[2])
{
    printf("\n%d%+di",a[0]-b[0],a[1]-b[1]);
}

void mul(int a[2], int b[2])
{
    printf("\n%d%+di",a[0]*b[0]-a[1]*b[1],a[1]*b[0]+a[0]*b[1]);
}

void main()
{
    int a[2], b[2];
    scanf("%d\n%d\n%d\n%d",&a[0],&a[1],&b[0],&b[1]);
    add(a,b);
    sub(a,b);
    mul(a,b);
}

