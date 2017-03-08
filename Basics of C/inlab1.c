#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int m;
    char s[100];
    scanf("%s %d",s,&m);
    int d = s[m-1] - '0';
//    int c=0,t=n;
//    while(t!=0)
//    {
//        c++;
//        t/=10;
//    }
//    int d = (n/((int)pow(10,c-m)))%10;
    if(d%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
