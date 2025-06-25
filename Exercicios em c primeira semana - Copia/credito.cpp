#include <stdio.h>
#include <math.h>


int valor_1, valor_2, valor_3, valor_4, valor_5, valor_6, valor_7, valor_8, valor_9, valor_10, valor_11, valor_12, valor_13, valor_14, valor_15, valor_16;
long long n_cartao;


int main(){
do{
    printf("digite o numero do cartao:");
    scanf("%lld", &n_cartao);
}while (n_cartao == 0);

printf("%lld\n", n_cartao);

valor_15 = ((n_cartao / 10) % 10);
valor_13 = (((n_cartao / 100) /10) % 10);
valor_11 = ((((n_cartao / 100) /100) /10) % 10);
valor_9 = (((((n_cartao / 100) /100) /100)/10) % 10);
valor_7 = ((((((n_cartao / 100) /100) /100) /100)/10) % 10);
valor_5 = (((((((n_cartao / 100) /100) /100) /100)/100)/10) % 10);
valor_3 = ((((((((n_cartao / 100) /100) /100) /100) /100)/100) /10) % 10);
valor_1 = (((((((((n_cartao / 100) /100) /100) /100) /100) /100)/100) /10) % 10);

int prevalor_15 = valor_15 *2;
int prevalor_13 = valor_13 *2;
int prevalor_11 = valor_11 *2;
int prevalor_9 =valor_9 *2;
int prevalor_7 =valor_7 *2;
int prevalor_5 =valor_5 *2;
int prevalor_3 =valor_3 *2;
int prevalor_1 =valor_1 *2;

printf("%d\n", prevalor_15);
printf("%d\n", prevalor_13);
printf("%d\n", prevalor_11);
printf("%d\n", prevalor_9);
printf("%d\n", prevalor_7);
printf("%d\n", prevalor_5);
printf("%d\n", prevalor_3);
printf("%d\n", prevalor_1);
printf("\n");

int valors_15 = (prevalor_15 / 10) % 10 + (prevalor_15 % 10);
int valors_13 = (prevalor_13 / 10) % 10 + (prevalor_13 % 10);
int valors_11 = (prevalor_11 / 10) % 10 + (prevalor_11 % 10);
int valors_9 = (prevalor_9 / 10) % 10 + (prevalor_9 % 10);
int valors_7 = (prevalor_7 / 10) % 10 + (prevalor_7 % 10);
int valors_5 = (prevalor_5 / 10) % 10 + (prevalor_5 % 10);
int valors_3 = (prevalor_3 / 10) % 10 + (prevalor_3 % 10);
int valors_1 = (prevalor_1 / 10) % 10 + (prevalor_1 % 10);

printf("%d\n", valors_15);
printf("%d\n", valors_13);
printf("%d\n", valors_11);
printf("%d\n", valors_9);
printf("%d\n", valors_7);
printf("%d\n", valors_5);
printf("%d\n", valors_3);
printf("%d\n", valors_1);



int soma_seg = valors_15 + valors_13 + valors_11 + valors_9 + valors_7 + valors_5 + valors_3 + valors_1;

printf("%d\n", soma_seg);

valor_16 = n_cartao % 10;
valor_14 = (n_cartao / 100) %10;
valor_12 = (((n_cartao / 100)/100)%10);
valor_10 = ((((n_cartao / 100)/100)/100)%10);
valor_8 = (((((n_cartao / 100)/100)/100)/100)%10);
valor_6 = ((((((n_cartao / 100)/100)/100)/100)/100)%10);
valor_4 = (((((((n_cartao / 100)/100)/100)/100)/100)/100)%10);
valor_2 = ((((((((n_cartao / 100)/100)/100)/100)/100)/100)/100)%10);


int soma_total = soma_seg +  valor_16 + valor_14 + valor_12 + valor_10 + valor_8 + valor_6 + valor_4 + valor_2;



printf("%d\n", soma_total);


if(soma_total % 10 == 0){

    printf("o Numero do Cartao e valido!\n");

}else{

    printf("o numero do cartao nao e valido!");

}

if ((valor_1 == 3 && valor_2 == 4)||(valor_1 == 3 && valor_2 == 7) && valor_15 + valor_16 == valor_15)
{
   printf("cartao: EXP");
}else if(valor_1 == 5 && (valor_2 == 1 || valor_2 == 2 || valor_2 == 3 || valor_2 == 4 || valor_2 == 5)){

    printf("cartao: Mastercard");

}else if(valor_1 == 4 && (valor_13+valor_14+valor_15+valor_16 == valor_13 || valor_14+valor_15+valor_16 == valor_14)){
    printf("cartao: visa");
}else{
    printf("outro cartao");
}


return 0;
}