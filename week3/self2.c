#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 3;
    srand(time(NULL));
    while (1) {
        int choice;
        printf("Welcome to the ROCK-PAPER-SCISSORS game\n");
        printf("ROCK: 0, PAPER: 1, SCISSORS: 2, EXIT: -1\n");
        printf("Enter an integer for your choice: ");
        scanf("%d", &choice);

        if (choice == -1) {
            break;
        }

        if (choice < -1 || choice > 2) {
            printf("Invalid choice. You must enter one of the above integers.\n\n");
            continue;
        }
        switch (choice) {
            case 0:
                printf("You picked ROCK\n");
                break;
            case 1:
                printf("You picked PAPER\n");
                break;
            case 2:
                printf("You picked SCISSORS\n");
                break;
        }
        int computer = rand() % N ;
        switch (computer) {
            case 0:
                printf("Computer picked ROCK\n");
                break;
            case 1:
                printf("Computer picked PAPER\n");
                break;
            case 2:
                printf("Computer picked SCISSORS\n");
                break;
        }

        if (computer == 2 && choice == 0) {
            printf("You WON\n");
        } else if (computer == 0 && choice == 1) {
            printf("You WON\n");
        } else if (computer == 1 && choice == 2) {
            printf("You WON\n");
        } else if ( computer == choice) {
            printf("TIE GAME\n");
        } else {
            printf("You LOST\n");
        }

        printf("\n");
    }
    

    return 0;
}
