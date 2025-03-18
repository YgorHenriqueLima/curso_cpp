#include <iostream>
#include <stdlib.h>
using namespace std;

    /*variável palavra para armazenar uma palavra secreta e a letra armazenada será as alternativas que a pessoa vai digitar*/
  
    /*
        armazenando o tamanho da palavra, índices, 
        chances => para armazenar quantas chances o jogador terá, chances=0 perde o jogo
        acertos => quantas palavras esse acertou
        acerto => verifica se o jogador digitou uma letra certa ou errada
    */

int main(){
    char palavra[30], letra[1], secreta[30];
    int tam,i,chances,acertos;
    bool acerto;

    tam=0; i=0; chances=6; acertos=0; acerto=false;

    cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: ";
    cin >> palavra;
    system("clear");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i=0; i < 30; i++){
        secreta[i] = '-';
    }

    while((chances > 0)&&(acertos < tam)){
        /*escrever na tela quantas chances ela tem*/
        cout << "chances restantes: " << chances << "\n\n"; 
        cout << "Palavra secreta: ";
        for(i = 0; i < tam; i++){
            cout << secreta[i];
        }
        /*pedindo a letra */
        cout << "\n\nDIGITE UMA LETRA: ";
        cin >> letra[0];
        /**
         * verificar se a letra existe, comparar letra por letra
         * se existir informar a variável acerto, adicionar a letra acertada no vetor
         * e incrementar a variável acerto
         */
        for(i=0;i<tam;i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }

        /*se não houver acerto, diminuo a chances*/
        if(!acerto){
            chances--;
        }
        acerto=false;
        system("clear");
    }
    
    if(acertos == tam){
        cout << "----------------------------\n";
        cout << "PARABÉNS! você venceu\n";
        cout << "----------------------------\n\n0";
    }else{
        cout << "------------------------------------------\n";
        cout << "QUE PENA! você perdeu, tente na próxima\n";
        cout << "------------------------------------------\n";

    }
    system("pause");
    return 0; 
}