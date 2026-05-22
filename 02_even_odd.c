#include<stdio.h>
int main() {
    int num;
    printf("Number daalo: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("%d Even number hai", num);
    } else {
        printf("%d Odd number hai", num);
    }
    return 0;
}
