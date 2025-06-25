#include <stdio.h>
#include <math.h>

float troco;
int qunt_moedas;
int moeda_25;
int moeda_10;
int moeda_5;
int moeda_1;
int troco_round;

int main(){
//parte onde insere os dados
    printf("Insira o valor do troco: ");
    scanf("%f", &troco);
    troco_round = round (troco *100);

    //divisão com 25
    moeda_25 = troco_round / 25;
    troco_round %= 25;
    
    //divisão com 10
    moeda_10 = troco_round / 10;
    troco_round %= 10;

    //divisão com 5
    moeda_5 = troco_round / 5;
    troco_round %= 5;

    //divisão com 1
    moeda_1 = troco_round;

    qunt_moedas = moeda_25 + moeda_10 + moeda_5 + moeda_1;
    printf("a quantida de moedas utilizadas foi de: %d\n", qunt_moedas);
    return 0;
}