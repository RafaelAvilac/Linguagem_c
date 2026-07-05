#include <stdio.h>
#include <string.h>

#define LIN 11  // Número de linhas do tabuleiro
#define COL 10  // Número de colunas do tabuleiro

// Struct que representa cada palavra da cruzadinha
typedef struct {
    char palavra[20];
    char dica[100];
    int linha;         // Linha onde a palavra começa
    int coluna;        // Coluna onde a palavra começa
    char direcao;      // 'V' = vertical, 'H' = horizontal
} Palavra;

// Função que inicializa o tabuleiro com '.'
void iniciar_tab(char tab[LIN][COL]) {
    int i, j;
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            tab[i][j] = '.';
        }
    }
}

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

void posicionar_palavras(char tab[LIN][COL], Palavra p[5], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < strlen(p[i].palavra); j++) {
            if (p[i].direcao == 'V') {
                tab[p[i].linha + j][p[i].coluna] = p[i].palavra[j];
            } else {
                tab[p[i].linha][p[i].coluna + j] = p[i].palavra[j];
            }
        }
    }
}

//tabuleiro completo com as respostas
void imprimir_tabuleiro(char tab[LIN][COL]) {
    int i, j;
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf(" %c ", tab[i][j]);
        }
        printf("\n");
    }
}

//dicas numeradas
void mostrar_dicas(Palavra p[5], int n) {
    int i;
    printf("\n==== DICAS ====\n");
    for (i = 0; i < n; i++) {
        printf("%d- %s.\n", i + 1, p[i].dica);
    }
}

//palpites do jogador
void verificar_palpite(Palavra p[5], int n) {
    int escolha; // qual dica o jogador escolheu
    char palpite[20]; // a resposta digitada pelo jogador
    int cont_corretos = 0;
    int tentativas = 0;
    int acertou[5] = {0, 0, 0, 0, 0};  // quais palavras já foram acertadas

    do {
        printf("\nTentativas restantes: %d\n", 8 - tentativas);
        printf("\nEscolha o numero da palavra (1 a %d) ou 0 para sair: ", n);
        scanf("%d", &escolha);

        if (escolha == 0) break;

        if (escolha < 1 || escolha > n) {
            printf("\nErro: numero da dica nao existe.\n");
            continue;
        }

        if (acertou[escolha - 1]) {  // jogador digita de 1 a 5, mas o vetor é de 0 a 4
            printf("Voce ja acertou essa palavra!\n");
            continue;  // não perde tentativa
        }

        printf("Digite sua resposta com letras MAIUSCULAS: ");
        scanf("%s", palpite);
        while (getchar() != '\n');
        tentativas++;

        if (strcmp(palpite, p[escolha - 1].palavra) == 0) { //compara as duas strings caractere por caractere e retorna 0 se forem idênticas
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

int main(void) {
    char tab[LIN][COL];
    Palavra p[5];
    int n = 5;

    // Palavra 0: MATRIZ — vertical, começa em (0,1)
    strcpy(p[0].palavra, "MATRIZ");
    strcpy(p[0].dica, "Arranjo bidimensional de dados (VERTICAL)");
    p[0].linha   = 0;
    p[0].coluna  = 1;
    p[0].direcao = 'V';

    // Palavra 1: STRUCT — horizontal, começa em (2,0)
    strcpy(p[1].palavra, "STRUCT");
    strcpy(p[1].dica, "Agrupa variaveis de tipos diferentes (HORIZONTAL)");
    p[1].linha   = 2;
    p[1].coluna  = 0;
    p[1].direcao = 'H';

    // Palavra 2: FUNCAO — vertical, começa em (1,3)
    strcpy(p[2].palavra, "FUNCAO");
    strcpy(p[2].dica, "Bloco de codigo reutilizavel (VERTICAL)");
    p[2].linha   = 1;
    p[2].coluna  = 3;
    p[2].direcao = 'V';

    // Palavra 3: PONTEIRO — horizontal, começa em (6,2)
    strcpy(p[3].palavra, "PONTEIRO");
    strcpy(p[3].dica, "Armazena um endereco de memoria (HORIZONTAL)");
    p[3].linha   = 6;
    p[3].coluna  = 2;
    p[3].direcao = 'H';

    // Palavra 4: VARIAVEL — vertical, começa em (2,7)
    strcpy(p[4].palavra, "VARIAVEL");
    strcpy(p[4].dica, "Espaco na memoria com nome(VERTICAL)");
    p[4].linha   = 3;
    p[4].coluna  = 7;
    p[4].direcao = 'V';

    printf("\n====== PALAVRA CRUZADA ======\n");
    iniciar_tab(tab);
    posicionar_palavras(tab, p, n);
    imprimir_tabuleiro_vazio(tab);
    mostrar_dicas(p, n);
    verificar_palpite(p, n);

    printf("\n==== TABULEIRO COMPLETO ====\n");
    imprimir_tabuleiro(tab);

    return 0;
}