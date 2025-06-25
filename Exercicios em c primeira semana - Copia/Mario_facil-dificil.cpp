#include <stdio.h>


int n;   
int main(){
    //entrada de dados
    
    do{
    printf("escreva um numero de 1 a 8:");
    scanf("%d", & n);
    }while(n<1 || n>8);

    
    
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("  ");

        for(int j=0; j < i;j++){
            printf("#");
        }
    printf("\n");
    
    }

    return 0;
    
}