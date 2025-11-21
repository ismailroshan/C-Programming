#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = &arr[n - 1];

    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
