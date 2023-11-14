#include <stdio.h>

int main() {
    int line;

    printf("Enter the number of lines between 1 and 15: ");
    scanf("%d", &line);

    for (int row = 0; row < line; row++) {

        for (int j = line - row; j >= 1; j--) {
            printf("%d ", j);
        }

        for (int k = 2; k <= line - row; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}