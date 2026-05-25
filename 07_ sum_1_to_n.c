#include<stdio.h>
int main(){
    int n, i, sum=0;
    printf("N daalo: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        sum = sum + i; // ya sum += i
    }
    printf("1 se %d tak sum = %d", n, sum);
    return 0;
}

