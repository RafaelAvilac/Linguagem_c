#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAM_MAX 10
#define ANO_MIN 1972
#define ANO_ATUAL 2026

typedef struct{
    char nome[100];
    int ano;
    int vezes_locado;
    char status; 
    char locatario[100];
} Filme;

void limpar_tela() {
    system("clear||cls");  
}

void maiuscula(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper((unsigned char)str[i]);
    }
}

void continuar(){
    printf("\nPressione Enter para continuar...");
    while(getchar() != '\n');
    printf("\n");
}

void menu(){
    printf("================= MENU =================\n\n");
    printf("1 - Cadastrar filme\n");
    printf("2 - Listar todos os filmes\n");
    printf("3 - Listar filmes locados\n");
    printf("4 - Alugar filme\n");
    printf("5 - Devolver filme\n");
    printf("6 - Filme mais locado\n");
    printf("7 - Buscar filme pelo nome\n");
    printf("8 - Atualizar dados do filme\n");
    printf("9 - Estatísticas gerais\n");
    printf("0 - Sair\n");
    printf("========================================\n");
}

void validar_opcao(int *opcao){
    int entrada_valida = 0;
    
    while(!entrada_valida) {
        printf("\nInforme o número da opção desejada (0-9): ");
        if(scanf("%d", opcao) != 1) {
            printf("Erro: Digite apenas números!\n");
        } else if(*opcao < 0 || *opcao > 9) {
            printf("Erro: Opção deve estar entre 0 e 9!\n");
        } else {
            entrada_valida = 1;
        }
        while(getchar() != '\n');
    }
}

void cadastrar_filmes(Filme *filmes, int *total_filmes){
    char sair = 's';
    int i = *total_filmes;
    
    if(*total_filmes >= TAM_MAX){
        printf("Não é possível cadastrar filmes.\nLimite atingido.\n");
        continuar();
        return;
    }

    printf("====== Cadastro de Filmes =====\n");
    
    while(sair != 'n' && i < TAM_MAX){
        do {
            printf("\nNome do %dº filme: ", i + 1);
            fgets(filmes[i].nome, sizeof(filmes[i].nome), stdin);
            filmes[i].nome[strcspn(filmes[i].nome, "\n")] = '\0';
            maiuscula(filmes[i].nome);
            
            if(strlen(filmes[i].nome) == 0) {
                printf("Erro: Nome não pode estar vazio!\n");
            }
        } while(strlen(filmes[i].nome) == 0);
        
        int entrada_valida = 0;
        while(!entrada_valida) {
            printf("Ano de lançamento: ");
            if(scanf("%d", &filmes[i].ano) != 1) {
                printf("Erro: Digite apenas números!\n");
            } else if(filmes[i].ano < ANO_MIN || filmes[i].ano > ANO_ATUAL) {
                printf("Erro: Ano deve estar entre %d e %d!\n", ANO_MIN, ANO_ATUAL);
            } else {
                entrada_valida = 1;
            }
            while(getchar() != '\n');
        }
        
        filmes[i].vezes_locado = 0;
        filmes[i].status = 'D';
        strcpy(filmes[i].locatario, "");
        
        i++;
        (*total_filmes)++;
        
        if(i >= TAM_MAX) {
            printf("\nLimite máximo de %d filmes atingido!\n", TAM_MAX);
            printf("=====================================\n");
            continuar();
            return;
        }
        
        printf("Cadastrar novo Filme (S/N): ");
        scanf(" %c", &sair);
        while(getchar() != '\n');
        sair = tolower(sair);
    }
    printf("\nCadastro finalizado. Total de filmes: %d/%d\n", *total_filmes, TAM_MAX);
    printf("=====================================\n");
    continuar();
}

void listar_filmes(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    printf("\n====== Filmes Cadastrados =====\n");
    for(int i = 0; i < total_filmes; i++){
        printf("\n[%d] %s (%d)\n", i + 1, filmes[i].nome, filmes[i].ano);
        printf("    Vezes locado: %d\n", filmes[i].vezes_locado);
        printf("    Status: %s\n", filmes[i].status == 'D' ? "Disponível" : "Locado");
        if(filmes[i].status == 'L'){
            printf("    Locatário: %s\n", filmes[i].locatario);
        }
        printf("-------------------------------\n");
    }
    continuar();
}

void filmes_locados(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    int encontrou = 0;
    printf("\n====== Filmes Locados =====\n");
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].status == 'L'){
            printf("\n[%d] %s (%d)\n", i + 1, filmes[i].nome, filmes[i].ano);
            printf("    Vezes locado: %d\n", filmes[i].vezes_locado);
            printf("    Locatário: %s\n", filmes[i].locatario);
            printf("-------------------------------\n");
            encontrou = 1; 
        }
    }
    
    if(!encontrou){
        printf("Nenhum filme está locado no momento.\n");
    }
    continuar();
}

void alugar_filme(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    int indices_disponiveis[TAM_MAX];
    int disponiveis = 0;
    
    printf("====== Filmes Disponíveis =====\n");
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].status == 'D'){
            printf("[%d] - %s (%d)\n", disponiveis + 1, filmes[i].nome, filmes[i].ano);
            indices_disponiveis[disponiveis] = i;
            disponiveis++;
        }
    }
    
    if(disponiveis == 0){
        printf("\nNenhum filme disponível no momento.\n");
        continuar();
        return;
    }
    
    printf("===============================\n");
    
    char sair = 's';
    while(sair != 'n'){
        int escolha;
        int entrada_valida = 0;
        
        while(!entrada_valida){
            printf("\nInforme o número do filme (1-%d): ", disponiveis);
            
            if(scanf("%d", &escolha) != 1){
                while(getchar() != '\n');
                printf("Erro: Digite apenas números!\n");
            }
            else if(escolha < 1 || escolha > disponiveis){
                while(getchar() != '\n');
                printf("Erro: Número inválido! Escolha entre 1 e %d.\n", disponiveis);
            }
            else{
                entrada_valida = 1;
                while(getchar() != '\n');
            }
        }
        
        int indice = indices_disponiveis[escolha - 1];
        
        printf("Nome do locatário: ");
        fgets(filmes[indice].locatario, sizeof(filmes[indice].locatario), stdin);
        filmes[indice].locatario[strcspn(filmes[indice].locatario, "\n")] = '\0';
        
        if(strlen(filmes[indice].locatario) == 0){
            printf("Erro: Nome não pode estar vazio!\n");
            continue;
        }
        
        maiuscula(filmes[indice].locatario);
        
        filmes[indice].status = 'L';
        filmes[indice].vezes_locado++;
        
        printf("\n? Filme '%s' alugado para %s com sucesso!\n", 
               filmes[indice].nome, filmes[indice].locatario);
        
        printf("\nAlugar outro filme? (S/N): ");
        scanf(" %c", &sair);
        while(getchar() != '\n');
        sair = tolower(sair);
    }
    
    printf("\nLocação finalizada.\n");
    continuar();
}

void devolver_filme(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    int indices_locados[TAM_MAX];
    int locados = 0;
    
    printf("====== Filmes Locados =====\n");
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].status == 'L'){
            printf("[%d] - %s (%d)\n", locados + 1, filmes[i].nome, filmes[i].ano);
            printf("     Locatário: %s\n", filmes[i].locatario);
            indices_locados[locados] = i;
            locados++;
        }
    }
    
    if(locados == 0){
        printf("\nNenhum filme locado no momento.\n");
        continuar();
        return;
    }
    
    printf("============================\n");
    
    int escolha;
    int entrada_valida = 0;
    
    while(!entrada_valida){
        printf("\nInforme o número do filme a devolver (1-%d): ", locados);
        
        if(scanf("%d", &escolha) != 1){
            while(getchar() != '\n');
            printf("Erro: Digite apenas números!\n");
        }
        else if(escolha < 1 || escolha > locados){
            while(getchar() != '\n');
            printf("Erro: Número inválido! Escolha entre 1 e %d.\n", locados);
        }
        else{
            entrada_valida = 1;
            while(getchar() != '\n');
        }
    }
    
    int indice = indices_locados[escolha - 1];
    
    printf("\nDevolvendo filme '%s'...\n", filmes[indice].nome);
    printf("Locatário: %s\n", filmes[indice].locatario);
    
    filmes[indice].status = 'D';
    strcpy(filmes[indice].locatario, "");
    
    printf("? Filme devolvido com sucesso!\n");
    continuar();
}

void filme_mais_locado(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    int max_locado = -1;
    int indice_mais_locado = -1;
    
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].vezes_locado > max_locado){
            max_locado = filmes[i].vezes_locado;
            indice_mais_locado = i;
        }
    }
    
    if(max_locado == 0){
        printf("Nenhum filme foi locado ainda.\n");
    } else {
        printf("\n====== Filme Mais Locado =====\n");
        printf("Nome: %s (%d)\n", filmes[indice_mais_locado].nome, 
               filmes[indice_mais_locado].ano);
        printf("Vezes locado: %d\n", filmes[indice_mais_locado].vezes_locado);
        printf("Status: %s\n", filmes[indice_mais_locado].status == 'D' ? "Disponível" : "Locado");
        
        // Verificar se há empate
        printf("\nOutros filmes com %d locações:\n", max_locado);
        int tem_empate = 0;
        for(int i = 0; i < total_filmes; i++){
            if(i != indice_mais_locado && filmes[i].vezes_locado == max_locado){
                printf("- %s (%d)\n", filmes[i].nome, filmes[i].ano);
                tem_empate = 1;
            }
        }
        if(!tem_empate){
            printf("(Nenhum empate)\n");
        }
    }
    continuar();
}

void buscar_filme(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    char busca[100];
    printf("Digite o nome do filme (ou parte dele): ");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';
    maiuscula(busca);
    
    int encontrou = 0;
    printf("\n====== Resultados da Busca =====\n");
    
    for(int i = 0; i < total_filmes; i++){
        if(strstr(filmes[i].nome, busca) != NULL){
            printf("\n[%d] %s (%d)\n", i + 1, filmes[i].nome, filmes[i].ano);
            printf("    Vezes locado: %d\n", filmes[i].vezes_locado);
            printf("    Status: %s\n", filmes[i].status == 'D' ? "Disponível" : "Locado");
            if(filmes[i].status == 'L'){
                printf("    Locatário: %s\n", filmes[i].locatario);
            }
            printf("-------------------------------\n");
            encontrou = 1;
        }
    }
    
    if(!encontrou){
        printf("Nenhum filme encontrado com '%s'\n", busca);
    }
    continuar();
}

void atualizar_filme(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    printf("====== Atualizar Filme =====\n");
    printf("Filmes cadastrados:\n");
    for(int i = 0; i < total_filmes; i++){
        printf("[%d] - %s (%d)\n", i + 1, filmes[i].nome, filmes[i].ano);
    }
    
    int escolha;
    int entrada_valida = 0;
    
    while(!entrada_valida){
        printf("\nInforme o número do filme (1-%d): ", total_filmes);
        
        if(scanf("%d", &escolha) != 1){
            while(getchar() != '\n');
            printf("Erro: Digite apenas números!\n");
        }
        else if(escolha < 1 || escolha > total_filmes){
            while(getchar() != '\n');
            printf("Erro: Número inválido! Escolha entre 1 e %d.\n", total_filmes);
        }
        else{
            entrada_valida = 1;
            while(getchar() != '\n');
        }
    }
    
    int indice = escolha - 1;
    
    printf("\nAtualizando filme: %s (%d)\n", filmes[indice].nome, filmes[indice].ano);
    printf("Status atual: %s\n", filmes[indice].status == 'D' ? "Disponível" : "Locado");
    
    // Atualizar nome
    char novo_nome[100];
    printf("\nNovo nome (deixe em branco para manter '%s'): ", filmes[indice].nome);
    fgets(novo_nome, sizeof(novo_nome), stdin);
    novo_nome[strcspn(novo_nome, "\n")] = '\0';
    
    if(strlen(novo_nome) > 0){
        maiuscula(novo_nome);
        strcpy(filmes[indice].nome, novo_nome);
    }
    
    // Atualizar ano
    char opcao_ano;
    printf("Deseja alterar o ano? (S/N): ");
    scanf(" %c", &opcao_ano);
    while(getchar() != '\n');
    opcao_ano = tolower(opcao_ano);
    
    if(opcao_ano == 's'){
        entrada_valida = 0;
        while(!entrada_valida) {
            printf("Novo ano de lançamento: ");
            if(scanf("%d", &filmes[indice].ano) != 1) {
                printf("Erro: Digite apenas números!\n");
            } else if(filmes[indice].ano < ANO_MIN || filmes[indice].ano > ANO_ATUAL) {
                printf("Erro: Ano deve estar entre %d e %d!\n", ANO_MIN, ANO_ATUAL);
            } else {
                entrada_valida = 1;
            }
            while(getchar() != '\n');
        }
    }
    
    printf("\n? Filme atualizado com sucesso!\n");
    printf("Nome: %s\n", filmes[indice].nome);
    printf("Ano: %d\n", filmes[indice].ano);
    printf("Vezes locado: %d\n", filmes[indice].vezes_locado);
    
    continuar();
}

void estatisticas(Filme filmes[], int total_filmes){
    if(total_filmes == 0){
        printf("Nenhum filme cadastrado.\n");
        continuar();
        return;
    }
    
    printf("\n====== Estatísticas Gerais =====\n");
    
    int total_locados = 0;
    int total_disponiveis = 0;
    int total_locacoes = 0;
    int ano_mais_antigo = ANO_ATUAL;
    int ano_mais_recente = ANO_MIN;
    char filme_antigo[100] = "";
    char filme_recente[100] = "";
    
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].status == 'L') total_locados++;
        else total_disponiveis++;
        
        total_locacoes += filmes[i].vezes_locado;
        
        if(filmes[i].ano < ano_mais_antigo){
            ano_mais_antigo = filmes[i].ano;
            strcpy(filme_antigo, filmes[i].nome);
        }
        
        if(filmes[i].ano > ano_mais_recente){
            ano_mais_recente = filmes[i].ano;
            strcpy(filme_recente, filmes[i].nome);
        }
    }
    
    printf("Total de filmes: %d/%d\n", total_filmes, TAM_MAX);
    printf("Filmes disponíveis: %d\n", total_disponiveis);
    printf("Filmes locados: %d\n", total_locados);
    printf("Total de locações: %d\n", total_locacoes);
    printf("Taxa de ocupação: %.1f%%\n", (total_locados * 100.0) / total_filmes);
    
    if(total_filmes > 0){
        printf("\nFilme mais antigo: %s (%d)\n", filme_antigo, ano_mais_antigo);
        printf("Filme mais recente: %s (%d)\n", filme_recente, ano_mais_recente);
        printf("Média de locações por filme: %.1f\n", total_locacoes / (float)total_filmes);
    }
    
    printf("\n===== Resumo por Status =====\n");
    printf("Disponíveis:\n");
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].status == 'D'){
            printf("- %s (%d locações)\n", filmes[i].nome, filmes[i].vezes_locado);
        }
    }
    
    printf("\nLocados:\n");
    for(int i = 0; i < total_filmes; i++){
        if(filmes[i].status == 'L'){
            printf("- %s (por: %s)\n", filmes[i].nome, filmes[i].locatario);
        }
    }
    
    continuar();
}

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao;
    int total_filmes = 0;
    Filme filmes[TAM_MAX];  
    
    do{
        menu();
        validar_opcao(&opcao);
        limpar_tela();
        
        switch(opcao){
            case 1:
                cadastrar_filmes(filmes, &total_filmes);
                break;
            case 2:
                listar_filmes(filmes, total_filmes);
                break;
            case 3:
                filmes_locados(filmes, total_filmes);
                break;
            case 4:
                alugar_filme(filmes, total_filmes);
                break;
            case 5:
                devolver_filme(filmes, total_filmes);
                break;
            case 6:
                filme_mais_locado(filmes, total_filmes);
                break;
            case 7:
                buscar_filme(filmes, total_filmes);
                break;
            case 8:
                atualizar_filme(filmes, total_filmes);
                break;
            case 9:
                estatisticas(filmes, total_filmes);
                break;
            case 0:
                break;
            default:
                printf("\nOpção inválida!\n");
                continuar();
                break;
        }
    
    } while(opcao != 0);
    
    printf("\n========================================\n");
    printf("   Programa encerrado. Até logo!\n");
    printf("========================================\n");
    
    return 0;
}
