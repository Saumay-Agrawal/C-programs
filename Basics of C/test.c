//
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//    char s[100];
//    gets(s);
//    int n = strlen(s);
//    rev(s,0,n-1);
//    puts(s);
//}
//
//void rev(char a[100],int l,int h)
//{
//    if(l<=h)
//        return rev(a,l+1,h-1);
//    char t = a[l];
//    a[l] = a[h];
//    a[h] = t;
//}
//
//
///*
//#include <stdio.h>
//#include <stdlib.h>
//
//void fibonacci(int n)
//{
//    int *f = (int*)malloc(n*sizeof(int));
//    *(f) = 0, *(f+1) = 1;
//    int i;
//    for(i=2;i<n;i++)
//    {
//        *(f+i) = *(f+i-1) + *(f+i-2);
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d\t",*(f+i));
//    }
//}
//
//void revfib(int n)
//{
//    if(n)
//}
//
//void main()
//{
//    int n;
//    scanf("%d",&n);
//    fibonacci(n);
//}
//
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void shift(int *a,int n)
//{
//    int t = *(a+n-1);
//    int i;
//    for(i=0;i<n-1;i++)
//    {
//        *(a+i) = *(a+i-1);
//    }
//    *a = t;
//}
//
//void main()
//{
//    int n,m;
//    scanf("%d", &n);
//    int *a = (int*)malloc(n*sizeof(int));
//    int i;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",a+i);
//    }
//    scanf("%d", &m);
//    for(i=0;i<n;i++)
//    {
//        printf("%d\t",*(a+i));
//    }
//    for(i=1;i<=m;i++)
//    {
//        shift(a,n);
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d\t",*(a+i));
//    }
//}

#include <stdio.h>

void main()
{
    printf("%s",__DATE__);
}
