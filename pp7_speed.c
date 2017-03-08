#include <stdio.h>
int main() {
    int g,m,f;
    float e;
    scanf("%d %f %d",&g,&e,&m);
    f = m<=50000?0:1;
    float d[4][2] = {3.4,1,0.31,0.39,0.4,1,0.25,0.31};
    if (e>d[g-1][f])
        printf("Emmision exeecds the prmitted level. %f",d[g-1][f]);
    else
        printf("Emission under control. %f",d[g-1][f]);
}
