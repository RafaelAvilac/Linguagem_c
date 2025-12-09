#include <stdio.h>

/*8 – Avaliar o desempenho do jogador
Escreva um programa que pede ao usuário a quantidade de gols marcados por um jogador em uma temporada e verifica:
Se fez mais de 10 gols, exibir "Excelente temporada!"
Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!"
Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."*/
int main(){
    
    int gols_marcados;

    printf("Informe quantos gols foram marcados: ");
    scanf("%d", &gols_marcados);

    if(gols_marcados > 10) {
        printf("Exelente temporada!");
    } else if (gols_marcados > 5)
    {
        printf("Boa temporada");
    } else {
        printf("Temporada abaixo do esperado.");
    }
    return 0;
}   
    