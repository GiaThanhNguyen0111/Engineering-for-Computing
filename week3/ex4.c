#include <stdio.h>
#include <math.h>

int main() {
    printf(" x |");
    for (int i = 1; i <= 10; i++) {
        printf("  %2d", i);
    }
    printf("\n");
    for (int i = 1; i <= 4 * 11; i++) {
        printf("-");
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        printf("%2d |", i);
        for (int j = 1; j <= 10; j++) {
            printf(" %3d", i * j);
        }

        printf("\n");
    }

    return 0;
}