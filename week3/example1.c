#include <math.h>
#include <stdio.h>

int main() {
    float result;
    while (1) { //Run a loop infinitely
        printf("Enter final result [0-100]: ");
        scanf("%f", &result);
        if (result < 0 || result > 100) {
            printf("Invalid value. \n"); //invalid error
        } else {
/* Your code here */; //break the loop if got valid value
            break;
        }
    }
// Round and output grade band based on result ranges
    result = round(result);
    printf("Your final grade is ");
    if (result < 50) {
        printf("NN \n");
    } else if (result < 60) {
        printf("PA \n");
    } else if (result < 70) {
        printf("CR \n");
    } else if (result < 80) {
        printf("DI \n");
    } else {
        printf("HD \n");
    }
return 0;
}
