#include <stdio.h>

int main() {
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    int hours = minutes / 60;
    int minutesLeft = minutes % 60;

    printf("%d minutes is %d hours %d minutes", minutes, hours, minutesLeft);
    return 0;
}