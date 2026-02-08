/*A partir do cadastro de pessoas já implementado (struct Cadastro, com nome e idade):

Implemente uma funcionalidade que permita remover uma pessoa do vetor.
Requisitos
O usuário deve:
visualizar a lista de pessoas cadastradas (com índice)
informar o índice da pessoa que deseja remover
O programa deve:
validar se o índice é válido
remover a pessoa escolhida
reorganizar o vetor para não deixar “buracos
reduzir a quantidade total de pessoas em 1
 Após a remoção:
exibir o cadastro atualizado*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

// Definição da estrutura que representa um Aluno
typedef struct{
    char nome[100];
    int idade;
} Cadastro;

// Função auxiliar para converter string para maiúsculas
// Recebe um ponteiro para char (a string)
void maiuscula(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        // Converte cada caractere individualmente
        str[i] = toupper((unsigned char)str[i]);
    }
}

// Função para validar a quantidade inicial de alunos
// Recebe um ponteiro (*qtd) para alterar o valor da variável na main
void validar_qtd(int *qtd){
    int entrada_valida = 0; // Flag de controle do loop
    
    while(!entrada_valida){
        printf("\nQuantos alunos deseja cadastrar: ");
        
        // Verifica se o usuário digitou um número inteiro
        if(scanf("%d", qtd) != 1) {
            printf("Erro: Digite apenas números!\n");
            while(getchar() != '\n'); // Limpa o buffer do teclado (lixo de memória)
        } else if(*qtd < 1) {
            // Regra de negócio: não aceitar 0 ou negativos
            printf("Erro: Opção deve ser maior que 0!\n");
        } else {
            entrada_valida = 1; // Sai do loop se tudo estiver ok
        }
        while(getchar() != '\n'); // Limpeza de segurança do buffer após ler o número
    }
}

// Função para preencher os dados do vetor
void preencher_dados(Cadastro *pessoas, int qtd){

    printf("\n\nDados dos alunos.\n");
    for(int i = 0; i < qtd; i++){
        int entrada_valida = 0;
        int nome_valido;
        
        // Loop de validação do Nome
        do {
            nome_valido = 1; // Assume que é válido até provar o contrário
            printf("\nInforme o %dº nome: ", i + 1);
            fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin); // Lê string com espaços
            
            // Remove o \n (Enter) que o fgets captura e substitui por \0 (fim de string)
            pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';
            
            maiuscula(pessoas[i].nome); // Padroniza o nome
            
            // Verifica se o nome está vazio
            if(!strlen(pessoas[i].nome)) {
                printf("Erro: Nome não pode estar vazio!\n");
                nome_valido = 0;
            } else {
                // Verifica se há caracteres inválidos (números ou símbolos)
                for(int j = 0; pessoas[i].nome[j] != '\0'; j++){
                    if(!isalpha((unsigned char)pessoas[i].nome[j]) && !isspace((unsigned char)pessoas[i].nome[j])){
                        nome_valido = 0;
                        printf("Erro: O nome deve conter apenas letras e espacos.\n");
                        break;
                    }
                }
            }
        } while(!nome_valido);
        
        // Loop de validação da Idade
        while(!entrada_valida){
            printf("Idade do aluno: ");
            if(scanf("%d", &pessoas[i].idade) != 1){
                printf("Digite apenas numeros\n");
                while(getchar() != '\n'); // Limpa buffer em caso de erro (letra no lugar de número)
            } else if(pessoas[i].idade < 4){
                printf("Idade mínima 4 anos.\n");
            } else {
                entrada_valida = 1;
                while(getchar() != '\n'); // Limpa o enter residual após o scanf
            }
        }
    }
}

// Função para exibir o relatório completo
void exibir_todos(Cadastro *pessoas, int qtd){
    printf("\n\n<<- RELATORIO DE ALUNOS ->>\n");
    printf("----------------------------------------------------------\n");
    printf("INDICE | NOME                                     | IDADE\n");
    printf("----------------------------------------------------------\n");
    for(int i = 0; i < qtd; i++){
        // %-40s alinha a string à esquerda com 40 espaços
        // %02d coloca um zero à esquerda se o número for menor que 10
        printf("%02d     | %-40s | %d anos\n", i+1, pessoas[i].nome, pessoas[i].idade);
        printf("----------------------------------------------------------\n");
    }
}

// Função principal de remoção
// Recebe ponteiro para qtd (*qtd) pois o tamanho lógico do vetor vai mudar
void remover_dados(Cadastro *pessoas, int *qtd){
    int indice, entrada = 0;

    // 1. Validação do índice a ser removido
    while(!entrada){
        printf("Informe o nº do índice do nome que deseja remover: ");
        if(scanf("%d", &indice) != 1){
            printf("Válido apenas números.\n");
            while(getchar() != '\n');
        } else if((indice < 1) || (indice > *qtd )){
            // Garante que o usuário não escolha um índice que não existe
            printf("Informe um número válido.\n");
        } else {
            entrada = 1;
            while(getchar() != '\n');
        }
    }
    
    // 2. Lógica de Deslocamento (Shift Left)
    // O loop começa na posição que queremos apagar (indice - 1, pois vetor começa em 0)
    // Vai até a penúltima posição (*qtd - 1) para evitar acessar memória inválida
    for(int i = indice - 1; i < *qtd - 1; i++){
        // Copia o elemento da frente (i+1) para a posição atual (i)
        // Isso "sobrescreve" o dado que queríamos apagar
        pessoas[i] = pessoas[i + 1];
    }
    
    // 3. Atualização da Quantidade
    // Decrementa o contador total, fazendo o último elemento (duplicado) ser ignorado
    (*qtd)--; 
}

// Exibe a lista após a remoção (poderia reutilizar exibir_todos, mas serve para clareza)
void exibir_atualizado(Cadastro *pessoas, int qtd){
    printf("\n\n<<- RELATORIO DE ALUNOS ->>\n");
    printf("----------------------------------------------------------\n");
    printf("INDICE | NOME                                     | IDADE\n");
    printf("----------------------------------------------------------\n");
    for(int i = 0; i < qtd; i++){
        printf("%02d     | %-40s | %d anos\n", i+1, pessoas[i].nome, pessoas[i].idade);
        printf("----------------------------------------------------------\n");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
    Cadastro *pessoas; // Ponteiro para criar o vetor dinamicamente
    int qtd; 
    
    // Passa o endereço de qtd (&qtd) para que a função possa alterar seu valor
    validar_qtd(&qtd);
    
    // Alocação Dinâmica de Memória (malloc)
    // Reserva espaço na memória Heap para 'qtd' estruturas do tipo Cadastro
    pessoas = (Cadastro *)malloc(qtd * sizeof(Cadastro));
    
    // Verificação de segurança: se o malloc falhar, encerra o programa
    if(pessoas == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }

    preencher_dados(pessoas, qtd);
    exibir_todos(pessoas, qtd);
    
    // Passa &qtd para remover_dados, pois a quantidade vai diminuir
    remover_dados(pessoas, &qtd);
    
    exibir_atualizado(pessoas, qtd);
    
    // Libera a memória alocada antes de encerrar
    free(pessoas);
    return 0;
}
