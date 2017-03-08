/* This file contains all the general kinds of numbers.*/

#include <stdio.h>
#include <math.h>

//Counts the number of digits in n.
int countDigit(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    return c;
}

//Checks whether given number is prime or not.
int isPrime(int n)
{
   int c=0,i;
   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           c++;
       }
   }
   if(c==0)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}

// Function is made assuming that n is prime.
int isCircularPrime(int n)
{
    int t=n, f=0, c=countDigit(n);
    do
    {
         t = (t%10) * (int)pow(10,c-1) + t/10;
         if (isPrime(t)==0)
         {
             f=1;
             break;
         }
    } while(t!=n);
    if (f==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",isCircularPrime(n));
    return 0;
}
