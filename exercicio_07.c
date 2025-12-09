#include <stdio.h>

    /*7 – Verificar se um Jogador Pode Jogar
    Escreva um programa que solicita ao usuário a idade de um jogador e verifica se ele pode jogar na categoria Sub-20 (jogadores com 20 anos ou menos). Se for mais velho, ele deve jogar na categoria profissional.*/

int main(){
    
    int idade;
    printf("Informe a idade do atleta: ");
    scanf("%d", &idade);

    if (idade <= 20)
    {
        printf("Categoria indicada: Sub-20");
    }else{
        printf("Categoria indicada: Profissional");
    }
    
    
    
    return 0;
}