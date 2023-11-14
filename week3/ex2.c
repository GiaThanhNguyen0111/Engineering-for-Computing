#include <stdio.h>
#include <math.h>


int main() {
    int sum;
    int count = 0;
    while(1) {
        int number;
        printf("Enter a positive integer: ");
        scanf("%d", &number);
        if (number >= 0) {
            sum += number;
            count++;
            continue;
        } else {
            break;
        }
    }

    printf("Sum is %d\n", sum);
    printf("There are %d positive integers", count);

    return 0;
}