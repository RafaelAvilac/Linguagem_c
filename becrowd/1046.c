/*1046-Leia a hora inicial e a hora final de um jogo. 
A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, 
tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.*/

#include <stdio.h>

int main(void){
    
    int inicio, fim, duracao;
    
    scanf("%d %d", &inicio, &fim);
    
    if (inicio < fim) {
       
        duracao = fim - inicio;
    } else {
        
        duracao = (24 - inicio) + fim;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    return 0;
}
