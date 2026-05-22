#include<stdio.h>
int main() {
    int a, b, c;
    printf("Teen number daalo: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= b && a >= c) {
        printf("%d sabse bada hai", a);
    }
    else if(b >= a && b >= c) {
        printf("%d sabse bada hai", b);
    }
    else {
        printf("%d sabse bada hai", c);
    }
    return 0;
}
