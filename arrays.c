#include <stdio.h>

void grouping_students()
{
    int marks[10],group[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
        group[marks[i]/10]++;
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d-%d: %d",(i*10),(i+1)*10,group[i]);
    }
}

int main()
{
    grouping_students();
    return 0;
}
