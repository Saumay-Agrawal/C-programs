#include <stdio.h>

void array_size()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *p1=&a[3], *p2=&a[8];
    printf("%d",p2-p1);
}



int main()
{
    array_size();
    return 0;
}
