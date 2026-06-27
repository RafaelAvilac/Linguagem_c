#include <stdio.h>
#include <string.h>

#define LIN 10  // Número de linhas do tabuleiro
#define COL 10  // Número de colunas do tabuleiro

// ============================================================================
// ESTRUTURAS DE DADOS
// ============================================================================

// Struct que representa cada palavra da cruzadinha
typedef struct {
    char palavra[20];  // A palavra em si (ex: "MATRIZ")
    char dica[100];    // A dica que será mostrada ao jogador
    int linha;         // Linha onde a palavra começa no tabuleiro
    int coluna;        // Coluna onde a palavra começa no tabuleiro
    char direcao;      // 'V' = vertical, 'H' = horizontal
} Palavra;

// ============================================================================
// FUNÇÕES DE MANIPULAÇÃO DO TABULEIRO
// ============================================================================

// Função que inicializa o tabuleiro com '.'
void iniciar_tab(char tab[LIN][COL]) {
    int i, j;
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            tab[i][j] = '.';
        }
    }
}

// Função que posiciona todas as palavras no tabuleiro
void posicionar_palavras(char tab[LIN][COL], Palavra *p, int n) {
    int i, k;
    for (i = 0; i < n; i++) {
        for (k = 0; k < strlen(p[i].palavra); k++) {
            if (p[i].direcao == 'V') {
                tab[p[i].linha + k][p[i].coluna] = p[i].palavra[k];
            } else {
                tab[p[i].linha][p[i].coluna + k] = p[i].palavra[k];
            }
        }
    }
}

// ============================================================================
// FUNÇÕES DE EXIBIÇÃO NA TELA
// ============================================================================

// Função que imprime o tabuleiro escondido (esqueleto)
// Mostra '#' onde há letras e '.' onde é vazio
void imprimir_tabuleiro_vazio(char tab[LIN][COL]) {
    int i, j;
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (tab[i][j] == '.') {
                printf(" . ");  // célula vazia
            } else {
                printf(" # ");  // letra escondida
            }
        }
        printf("\n");
    }
}

// Função que imprime o tabuleiro completo com as respostas
void imprimir_tabuleiro(char tab[LIN][COL]) {
    int i, j;
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf(" %c ", tab[i][j]);
        }
        printf("\n");
    }
}

// Função que mostra as dicas numeradas
void mostrar_dicas(Palavra *p, int n) {
    int i;
    printf("\n==== DICAS ====\n");
    for (i = 0; i < n; i++) {
        printf("%d- %s.\n", i + 1, p[i].dica);
    }
}

// ============================================================================
// LÓGICA PRINCIPAL DO JOGO
// ============================================================================

// Função que gerencia os palpites do jogador
void verificar_palpite(Palavra *p, int n) {
    int escolha;
    char palpite[20];
    int cont_corretos = 0;
    int tentativas = 0;
    int acertou[5] = {0, 0, 0, 0, 0};  // controla quais palavras já foram acertadas

    do {
        printf("\nTentativas restantes: %d\n", 8 - tentativas);
        printf("\nEscolha o numero da palavra (1 a %d) ou 0 para sair: ", n);
        scanf("%d", &escolha);

        if (escolha == 0) break;

        if (escolha < 1 || escolha > n) {
            printf("\nErro: numero da dica nao existe.\n");
            continue;
        }

        if (acertou[escolha - 1]) {
            printf("Voce ja acertou essa palavra!\n");
            continue;  // não perde tentativa
        }

        printf("Digite sua resposta com letras MAIUSCULAS: ");
        scanf("%s", palpite);
        while (getchar() != '\n');
        tentativas++;

        if (strcmp(palpite, p[escolha - 1].palavra) == 0) {
            printf("Correto!\n");
            cont_corretos++;
            acertou[escolha - 1] = 1;
        } else {
            printf("Errado!\n");
        }

    } while (escolha != 0 && tentativas < 8);

    // Mensagem final
    if (cont_corretos == n) {
        printf("\nPARABENS! Voce acertou todas as palavras!\n");
    } else {
        printf("\nVoce acertou %d de %d palavras!\n", cont_corretos, n);
    }
}

// ============================================================================
// FUNÇÃO DE ENTRADA (MAIN)
// ============================================================================

int main(void) {
    char tab[LIN][COL];
    Palavra p[5];

    // Palavra 0: MATRIZ — vertical, começa em (0,1)
    strcpy(p[0].palavra, "MATRIZ");
    strcpy(p[0].dica, "Arranjo bidimensional de dados");
    p[0].linha   = 0;
    p[0].coluna  = 1;
    p[0].direcao = 'V';

    // Palavra 1: STRUCT — horizontal, começa em (2,0)
    strcpy(p[1].palavra, "STRUCT");
    strcpy(p[1].dica, "Agrupa variaveis de tipos diferentes");
    p[1].linha   = 2;
    p[1].coluna  = 0;
    p[1].direcao = 'H';

    // Palavra 2: FUNCAO — vertical, começa em (1,3)
    strcpy(p[2].palavra, "FUNCAO");
    strcpy(p[2].dica, "Bloco de codigo reutilizavel");
    p[2].linha   = 1;
    p[2].coluna  = 3;
    p[2].direcao = 'V';

    // Palavra 3: PONTEIRO — horizontal, começa em (6,2)
    strcpy(p[3].palavra, "PONTEIRO");
    strcpy(p[3].dica, "Armazena um endereco de memoria");
    p[3].linha   = 6;
    p[3].coluna  = 2;
    p[3].direcao = 'H';

    // Palavra 4: VARIAVEL — vertical, começa em (2,7)
    strcpy(p[4].palavra, "VARIAVEL");
    strcpy(p[4].dica, "Espaco na memoria com nome");
    p[4].linha   = 2;
    p[4].coluna  = 7;
    p[4].direcao = 'V';

    // Fluxo de Execução do Jogo
    iniciar_tab(tab);                // 1. Preenche tabuleiro com '.'
    posicionar_palavras(tab, p, 5); // 2. Posiciona as palavras
    imprimir_tabuleiro_vazio(tab);  // 3. Mostra esqueleto ao jogador
    mostrar_dicas(p, 5);            // 4. Mostra as dicas
    verificar_palpite(p, 5);        // 5. Jogador tenta adivinhar

    printf("\n==== TABULEIRO COMPLETO ====\n");
    imprimir_tabuleiro(tab);        // 6. Revela tabuleiro no final

    return 0;
}