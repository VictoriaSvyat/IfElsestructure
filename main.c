#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, x, y;
    double d = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b-4*a*c;
    if (d>=0)
        {
        printf("D = %lf\n", d);
        d = pow(d, 0.5);
        x = (-b + d) / (2*a);
        y = (-b - d) / (2*a);
        printf("x1 = %lf\n", x);
        printf("x2 = %lf", y);
        }
    else 
        {
        printf("EMPTY");
        }
    printf("\n");
}