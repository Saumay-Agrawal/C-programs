#include <stdio.h>

void main() {
    const double pi = 3.14;
    const int decimal = 70;
    const int octal = 070;
    const int hexadecimal = 0x70;
    const float exponential = -0.22E-5;
    printf("%lf\n%d\n%d\n%d\n",pi,decimal,octal,hexadecimal);
    return 0;
}
