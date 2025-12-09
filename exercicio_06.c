#include <stdio.h>

int main(){

    int cartao;
    printf("Informe a quantidade de cartoes: ");
    scanf("%d", &cartao);

    if (cartao < 2)
    {
        printf("Pode jogar!");
    }else{
        printf("Jogador está expulso da partida.");
    }
    
    return 0;
}