#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Print a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double avg = (a + b + c) / 3.0;
    double geo = cbrt(a * b * c);

    avg < 10 ? printf("arg: %.21f\ngeo: %.21f\n", avg, geo) : printf("min 1 and 3: %.21f\n", fmin(a, c));

    return 0;
}