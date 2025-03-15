#include <stdio.h>

// Function to compute Fibonacci recursively
int fib(int x) {
    if (x == 0) return 0;  // Base case 1
    if (x == 1) return 1;  // Base case 2
    return fib(x - 1) + fib(x - 2);  // Recursive case
}

// Function to print Fibonacci Series
void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciSeries function
    fibonacciSeries(n);

    return 0;
}
