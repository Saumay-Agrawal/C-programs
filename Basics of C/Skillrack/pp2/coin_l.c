#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    n=4;
    char a[4][4] = {{'b','r','y','r'},{'r','r','y','b'},{'y','r','b','b'},{'b','r','r','r'}};
    //char a[20][20];
    int i,j;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%c",&a[i][j]);
//            printf(" ");
//        }
//        printf("\n");
//    }
    int f=0;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            int vl=0,hl=0;
            int x=i,y=j;
            for(;x>0;x--)
            {
                if(a[x][y]!=a[x-1][y])
                    break;
                vl++;
            }
            for(;y<n;y++)
            {
                if(a[x][y]!=a[x][y+1])
                    break;
                hl++;
            }
            if(vl>=3 && hl>=3)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%c\t",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
}

