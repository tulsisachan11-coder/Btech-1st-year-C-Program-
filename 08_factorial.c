#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // long long kyunki bada number hota hai

    printf("Number daal: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Negative ka factorial nahi hota yaar 😅\n");
    }
    else {
        for(i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("%d ka factorial = %lld\n", n, fact);
    }

    return 0;
}

