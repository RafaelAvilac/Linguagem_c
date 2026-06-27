#include <stdio.h>

// Procedimento de boas-vindas
void boas_vindas() {
    printf("=====================================\n");
    printf("   Bem-vindo ao Supermercado Mágico\n");
    printf("=====================================\n");
}

// Função que realiza uma venda
// Recebe ponteiro para saldo, valor do item e valor pago
// Atualiza o saldo (soma o valor do item) e retorna o troco
float realizar_venda(float *saldo, float valor_item, float valor_pago) {
    float troco = valor_pago - valor_item;
    *saldo += valor_item;   // o caixa aumenta pelo valor da mercadoria
    return troco;
}

// Função que verifica se o saldo final é o esperado (R$ 2000,00)
// Retorna 1 se igual (com tolerância de 0.001), caso contrário 0
int verificar_caixa(float saldo, float esperado) {
    float diferenca = saldo - esperado;
    if (diferenca < 0) diferenca = -diferenca;
    return (diferenca < 0.001f) ? 1 : 0;
}

int main() {
    float saldo = 1000.00f;
    float total_troco = 0.0f;
    int i;
    const int NUM_VENDAS = 5000;
    const float VALOR_ITEM = 0.20f;
    const float VALOR_PAGO = 0.25f;
    const float ESPERADO = 2000.00f;

    boas_vindas();
    printf("\nIniciando o expediente...\n\n");

    // Simulação das 5000 vendas
    for (i = 0; i < NUM_VENDAS; i++) {
        float troco = realizar_venda(&saldo, VALOR_ITEM, VALOR_PAGO);
        total_troco += troco;
    }

    // Exibição dos resultados
    printf("Resultados do dia:\n");
    printf("Saldo final do caixa: R$ %.2f\n", saldo);
    printf("Total de troco entregue: R$ %.2f\n", total_troco);
    printf("Número de vendas: %d\n", NUM_VENDAS);

    if (verificar_caixa(saldo, ESPERADO)) {
        printf("Sucesso! O caixa bateu.\n");
    } else {
        printf("ERRO! O caixa não bateu.\n");
        printf("Esperado: R$ %.2f | Obtido: R$ %.2f\n", ESPERADO, saldo);
    }

    return 0;
}
