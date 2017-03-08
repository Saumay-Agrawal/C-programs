#include <stdio.h>
int main() {
    char b,p;
    int s,t;
    scanf("%c %d %c",&b,&s,&p);
    if (b=='w')
    {
        t = (15+60+18+20)*60 + 2;
        if (p=='a')
            t += (75+45+30)*60;
    }
    else
    {
        t = (20+60+33+30)*60 + 2;
        if (p=='a')
            t += (75+35+30)*60;
    }
    if (s==2)
        t *= 1.5;
    printf("%d",t);
    return(0);
}
