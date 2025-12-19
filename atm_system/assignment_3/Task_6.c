#include <stdio.h>
#include <stdio.h>

void incrementByValue(int n) {
    n = n + 1;
}

void incrementByReference(int *n) {
    *n = *n + 1;
}

int main() {
    int num = 5;

    incrementByValue(num);
    printf("After pass by value: %d\n", num);

    incrementByReference(&num);
    printf("After pass by reference: %d\n", num);

    return 0;
}
