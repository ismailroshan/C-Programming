Ismail Yusuf Roshan 
251M035 
Roll no. 32
F.E Mechanical 
#include <stdio.h>

int main() {
    int inputNumber;

    printf("\nEnter Number => ");
    scanf("%d", &inputNumber);

    if (inputNumber % 2 == 0) {
        printf("\n%d is an Even Number!\n", inputNumber);
    } else {
        printf("\n%d is an Odd Number!\n", inputNumber);
    }

    return 0;
}
