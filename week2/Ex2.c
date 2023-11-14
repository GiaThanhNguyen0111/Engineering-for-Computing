#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    double power;
    printf("Enter two numbers (seprated by a space): ");
    scanf("%lf %lf", &x, &y);

    power = pow(x, y);

    printf("%.2lf^%.2lf = %.2lf", x, y, power);

    return 0;
}