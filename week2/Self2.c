#include <stdio.h>

/*
    Calculate Final Result;
    Author: Gia Thanh Nguyen
    Last modified: 2023/11/07 11:19:00PM 
*/

int main() {
    const double ASM1 = 0.3;
    const double ASM2 = 0.3;
    const double ASM3 = 0.4;

    double asmt1, asmt2, asmt3;

    printf("Enter 3 assessment scores: ");
    scanf("%lf %lf %lf", &asmt1, &asmt2, &asmt3);

    double final = asmt1 * ASM1 + asmt2 * ASM2 + asmt3 * ASM3;

    printf("The final result is %.2lf", final); 

    return 0;
}