#include <stdio.h>
#include <math.h>

int digits(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    return c;
}

int checkPrime(int n)
{
    int f=1;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

int checkCPrime(int n)
{
    int c = (int)pow(10,digits(n)-1)+1;
    printf("%d",c);
    int f=1, t=n;
    do
    {
        if(checkPrime(t)==0)
        {
            f=0;
            break;
        }
        t = (t%10)*c + (t/10);
        printf("\n%d",t);
    } while(t!=n);
    return f;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    if(checkCPrime(n)==1)
    {
        printf("Circular Prime");
    }
    else
    {
        printf("Not Circular Prime");
    }
    return 0;
}
