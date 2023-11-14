#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    int num = number;

    // Solution 1:

    // while(number != 0) {
    //     int digit = number % 10;
    //     sum += digit;
    //     number = number / 10;
    // }

    // Solution 2:

    // Getting the last of ****
    // Conform to the concepts learned so far.
    int digit = number % 10;
    sum += digit;
    number = number / 10;

    digit = number % 10;
    sum += digit;
    number = number / 10;

    digit = number % 10;
    sum += digit;
    number = number / 10;

    digit = number % 10;
    sum += digit;
    number = number / 10;


    printf("Sum of digits of %d: %d", num, sum);

    return 0;
}