#include <stdio.h>
#include <string.h>

void main() {
    char s[100];
    gets(s);
    int n = strlen(s);
    //printf("%d",n);
    rev(s,0,n-1);
    puts(s);
}

void rev(char a[100],int l,int h)
{
    printf("\nl=%d,h=%d",l,h);
    if(l<h)
    {
        char t = a[l];
        a[l] = a[h];
        a[h] = t;
        return rev(a,l+1,h-1);
    }

}
