#include <stdio.h>

int recursive(int container3, int container5, int target, int counter, int transfer) {
    if (target > 8 || target <= 0) {
        return 0;
    }
    printf("Step %d\n", counter);
    if (transfer != 0) {
        printf("Transfer %d liters from the 3-liter to the 5-liter container.\n", transfer);
    }
    printf("Current in Container 3: %d\n", container3);
    printf("Current in Container 5: %d\n", container5);


    if (container5 == target || container3 + container5 == target) {
        return 1;
    }

    if (container3 == 0) {
        transfer = 0;
        return recursive(3, container5, target, counter + 1, transfer);
    }

    if (container3 > 0 && container5 < 5) {
        transfer = (container3 < 5 - container5) ? container3 : (5 - container5);
        if (recursive(container3 - transfer, container5 + transfer, target, counter + 1, transfer)) {
            return 1;
        }
    }

    if (container5 > 0) {
        transfer = 0;
        return recursive(container3, 0, target, counter + 1, transfer);
    }

    return 0;
}

int main() {
    int container3 = 0;
    int container5 = 0;
    int target;
    int counter = 0;
    int transfer = 0;
    
    printf("Enter the amount to measure: ");
    scanf("%d", &target);

    if( recursive(container3, container5, target, counter, transfer) ) {
        printf("\nFinished");
    } else {
        printf("Cannot find any ways");
    }
    return 0;
}

