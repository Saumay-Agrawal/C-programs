//This file contains basic functions related to one dimensional arrays.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void input(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
}

void display(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void main()
{
    int *a, n,i;
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("\n%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(a+i));
    }
}
