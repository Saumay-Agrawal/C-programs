#include <stdio.h>
int main() {
    int id,r,h;
    float np=0;
    scanf("%d% d% d",&id,&r,&h);
    if (h>40)
    {
        np = (h-40)*r*1.5;
        h = 40;
    }
    np += h*r;
    np -= np*0.03625;
    printf("%d %.3f",id,np);
    return(0);
}
