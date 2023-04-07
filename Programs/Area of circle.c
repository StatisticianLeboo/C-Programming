#include <stdio.h>

#define PI 22/7.0
#define SQR(X) X*X
#define DEMO(X) X + X

int main()
{
    int r, n, k;
    //printf("Enter radius of circle;");
    //scanf("%d", &r);
    //double areaofcircle = PI * r *r;
    //printf("Area is %lf", areaofcircle);
    n = SQR(10);
    //printf("%d", n);
    k = DEMO(2) * DEMO(3);
    printf("%d", k);
}
