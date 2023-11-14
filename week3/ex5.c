#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("Enter number betweem 1 and 15: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number - i; j++) {
            printf("  ");
        }

        for (int k = i; k >= 1; k--) {
            printf("%2d", k);
        }

        for (int h = 2; h <= i ; h++) {
            printf(" %1d", h);
        }
        printf("\n");
    }


    return 0;
}