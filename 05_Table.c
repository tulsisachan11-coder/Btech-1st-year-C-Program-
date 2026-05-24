#include<stdio.h>
int main(){
    int n, i;
    printf("Jis number ka table chahiye daalo: ");
    scanf("%d", &n);
    
    printf("%d ka Table:\n", n);
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
