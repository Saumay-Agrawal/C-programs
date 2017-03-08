#include <stdio.h>
#include <math.h>
int main(){
    int m;
    float s,t,fps,mps;
    scanf("%d %f",&m,&s);
    t = (m*60)+round(s);
    fps = 5280/t;
    mps = 1609.34/t;
    printf("%.2f fps\n%.2f mps",fps,mps);
    return(0);
}
