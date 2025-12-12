#include <stdio.h>
#include <stdlib.h>

/*Exercício 2: Verificação de Nota e Frequência para Aprovação?
Você foi contratado para fazer um sistema simples de avaliação escolar. O programa deve apresentar o seguinte menu:
Verificar se o aluno foi aprovado
Sair
?Se o usuário escolher a opção 1, o programa deve solicitar a nota final (de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).
O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência for maior ou igual a 75%. Use if else para essa verificação dentro do case 1.
Se o usuário escolher a opção 2, o programa deve encerrar.
Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".*/

int main(){
    int opcao;
    float nota, frequencia;
    
    printf("Verificacao de Nota e Frequencia para Aprovacao\n");
    printf("================== Menu =======================\n");
    printf("[1] - Verificar se o aluno foi aprovado \n[2] - Sair\n");
    printf("===============================================\n");
    printf("Opcao desejada: ");
    scanf("%d", &opcao);
    system("cls");
    switch (opcao){
        case 1:
            printf("Informe a nota final do aluno (0 / 10): ");
            scanf("%f", &nota);
            
            if(nota < 0 || nota > 10){
                printf("Nota Invalida.\n");
            } else {
                printf("Informe o percentual de frequencia (0 / 100): ");
                scanf("%f", &frequencia);
                
                if(frequencia < 0 || frequencia > 100){
                    printf("Frequencia invalida.\n");
                } else if(nota >= 7 && frequencia >= 75){
                    printf("Aluno Aprovado.\n");
                } else {
                    printf("Aluno Reprovado.\n");
                }
            }
            break;
            
        case 2:
            printf("Programa encerrado.\n");
            break;
            
        default:
            printf("Opcao invalida.\n");
            break;
    }
    
    return 0;
}
