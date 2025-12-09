#include<stdio.h>
/*9 – Classificação do jogador baseada em idade e desempenho
Escreva um programa que solicita ao usuário:
A idade do jogador.
A quantidade de gols marcados.
O programa deve classificar o jogador nas seguintes categorias:
✅ Se tem até 20 anos e fez mais de 10 gols: "Jovem talento promissor!"
✅ Se tem até 20 anos e fez 10 gols ou menos: "Jovem em desenvolvimento."
✅ Se tem mais de 20 anos e fez mais de 15 gols: "Jogador experiente em grande fase!"
✅ Se tem mais de 20 anos e fez 15 gols ou menos: "Estevão"*/

int main(){
    int idade, gols;
    printf("Qual a idade do jogador: ");
    scanf("%d", &idade);
    printf("Quantos gols marcados: ");
    scanf("%d", &gols);

    if (idade <= 20 && gols > 10) {
        printf("Jovem talento promissor!\n");
    } else if (idade <= 20 && gols <=10 ){
        printf("Jovem em desenvolvimento.\n");
    } else if (idade > 20 && gols > 15) {
        printf("Jogador experiente em grande fase!\n");
    } else if (idade > 20 && gols <= 15){
        printf("Estevão");
    }
    

    return 0;
}