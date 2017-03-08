#include <stdio.h>
#include <string.h>

void input(char c[])
{
    scanf("%s",c);
}

void display(char c[])
{
    printf("%s",c);
}

void combinations(char c[])
{
    int n = strlen(c);
    char x[6];
    x[0]=c[0];
    x[1]=c[n-1];

}

int main()
{
    char c[10];
    gets(c);
    puts(c);
    combinations(c);
    return 0;
}
