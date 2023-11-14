#include <stdio.h>

int main(void) {
    int miles, yards;

    printf("Enter miles: ");
    scanf("%d", &miles);
    printf("Enter yards: ");
    scanf("%d", &yards);

    double kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %.0lf kilometers.\n", kilometers);
    return 0;
}