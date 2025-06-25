#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <cctype>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char p1[100];
char p2[100];
int pontos1, pontos2;
int A = 'A';

int main(){

//entrada
printf("insira a palavra do Player 1: ");
scanf("%s", p1);

printf("insira a palavra do Player 2: ");
scanf("%s", p2);



//uper
for(int i = 0; p1[i] != '\0'; i++){

    p1[i] = toupper(p1[i]);
    if(p1[i] >= 'A' && p1[i] <= 'Z'){

      pontos1 += points[ p1[i]-A]; 
      
    }
}
for(int i = 0; p2[i] != '\0'; i++){

    p2[i] = toupper(p2[i]);
    if(p2[i] >= 'A' && p2[i] <= 'Z'){

      pontos2 += points[ p2[i]-A]; 
       
    }
}
printf("\n");
if(pontos1>pontos2){
    int total = pontos1 - pontos2;
    printf("player 1(total: %d) e o vencedor com %d a mais que o player 2", pontos1, total);
}else if(pontos2>pontos1){
    int total2 = pontos2 - pontos1;
    printf("player 2(total: %d) é o vencedor com %d a mais que o player 1", pontos2, total2);
}else{
    printf("Empate\nPontuacao:\nPlayer1: %d pontos\nPlayer2: %d pontos\nFIM DE JOGO!!!", pontos1, pontos2);
}


    return 0;
}