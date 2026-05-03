#include <stdio.h>

// Function to calculate sum of Fibonacci series up to n terms
int fibonacci(int n) {
    int a = 0, b = 1, next, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a;          // add current term to sum
        next = a + b;      // generate next term
        a = b;
        b = next;
    }
    return sum;
}

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the range (number of terms): ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);   // print current term
        next = a + b;
        a = b;
        b = next;
    }

    int total = fibonacci(n);
    printf("\nSum of Fibonacci series up to %d terms = %d\n", n, total);

    return 0;
}
