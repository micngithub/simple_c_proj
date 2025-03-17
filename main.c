#include <stdio.h>

// Function prototypes
int sum(int a, int b);
int minus(int a, int b);
int multiple(int a, int b);

int main() {
    int a = 10, b = 5;
    
    printf("Sum: %d\n", sum(a, b));
    printf("Minus: %d\n", minus(a, b));
    
    return 0;
}

// Function definitions
int sum(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int multiple(int a, int b) {
    return a * b;
}

