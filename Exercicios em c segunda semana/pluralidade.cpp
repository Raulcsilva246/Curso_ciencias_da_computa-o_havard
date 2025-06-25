#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


const int numero = 3;

int n_eleitores(string nome[numero]);


int main(){
    system("cls");

    string nome[numero];

cout << "entre com o nome dos candidatos:" << endl;

for(int i = 0; i < numero; i++){
    cin >> nome[i];
}

system("cls");
n_eleitores(nome);
return 0;

}

int n_eleitores(string nome[numero]){
    
    int eleitores;
    int valorV[numero] = {0};
    int votonulo = 0;
    int maisV = 0;
    
    cout << "qual o numero de eleitores: ";
    cin >> eleitores;
    string voto[eleitores];

    for(int i = 0; i < eleitores; i++){
        cout << "Voto" << (i+1) << ": ";
        cin >> voto[i];

    }

    //resultados

    for(int i = 0; i < eleitores; i++){

        if(nome[0] == voto[i]){
            valorV[0]++;
        }
        else if(nome[1] == voto[i]){
        valorV[1]++;
        }
        else if(nome[2] == voto[i]){
        valorV[2]++;
        }
        else{
        votonulo++;
        }
    }

    for(int i = 0; i < numero; i++){
        if(valorV[i] > valorV[maisV]){
            maisV = i;
        }
    }

    cout << "mais votado foi: " << nome[maisV] << " com: " << valorV[maisV] << " votos";

    return 1;

}