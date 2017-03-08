#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[20][20],m[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        int max = 0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
            m[i] = max;
        }
    }
    for(i=0;i<n;i++)
    {
        //int max = 0;
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
//            if(a[i][j]>max)
//            {
//                max = a[i][j];
//            }
//            m[i] = max;
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",m[i]);
    }
    return 0;
}
