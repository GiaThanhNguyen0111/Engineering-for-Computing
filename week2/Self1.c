#include <stdio.h>

/*
    VND to USD algo
    1 USD = 23,150;
*/

int main() {
    const double USD = 23.150;
    double amount;

    printf("Enter number of VND: ");
    scanf("%lf", &amount);

    printf("%.3lf amount of VND convert to USD: %.3lf", amount, amount / USD);

    return 0;
}