#include <stdio.h>
#include <math.h>

int main() {

    for (int i = 1; i <= 94; i++) {
        if (i % 15 == 0) {
            printf("%c\n", i+32);
            continue;
        } 
        printf("%c ", i+32);
    }

    return 0;
}