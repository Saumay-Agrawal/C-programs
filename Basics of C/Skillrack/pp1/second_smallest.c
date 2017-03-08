#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(n*sizeof(int));
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("\n%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("%d",a[1]);
}
