#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINE

int main()
{
    double x, y, a, b;
    printf("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);

    a = x*log(x) + (y/cos(x)-(x/3));
    printf("%+.*lf\n", 5, a);

    b = sin(sqrt(x+1)) - sin(sqrt(x-1));
    printf("%+E\n", b);
    return 0;



}