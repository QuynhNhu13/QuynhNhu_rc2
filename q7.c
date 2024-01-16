#include <stdio.h>


int isPrime(int num) {
    if (num < 2) {
        return 0;  
    }
    int i=2;
    for (i; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int n;
    printf("Input number of element: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input!\n");
        return 1; 
    }
    int A[n];
    printf("Input array: ");
    int i=0;
    for (i; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Prime numbers in your array: ");
    int j=0;
    for (j; j < n; j++) {
        if (isPrime(A[j])) {
            printf("%d, ", A[j]);
        }
    }
    printf("\n");
    return 0;
}

