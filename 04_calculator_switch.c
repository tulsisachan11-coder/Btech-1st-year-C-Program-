#include<stdio.h>
int main(){
    int a, b;
    char op;
    printf("Do number daalo: ");
    scanf("%d %d", &a, &b);
    printf("Operation daalo + - * / : ");
    scanf(" %c", &op); // space zaruri hai %c se pehle
    
    switch(op){
        case '+': 
            printf("Jawab = %d", a+b); 
            break;
        case '-': 
            printf("Jawab = %d", a-b); 
            break;
        case '*': 
            printf("Jawab = %d", a*b); 
            break;
        case '/': 
            printf("Jawab = %d", a/b); 
            break;
        default: 
            printf("Galat operation");
    }
    return 0;
}
