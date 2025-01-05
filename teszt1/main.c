#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("A 0 és 1000 közötti prím számok:\n");
    for (int i = 0; i <= 1000; i++) {
        if (isPrime(i)) {
            printf("%5d ", i);
        }
    }
    printf("\n");
    return 0;
}
