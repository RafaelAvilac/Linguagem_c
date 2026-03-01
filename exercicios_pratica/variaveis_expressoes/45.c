#include <stdio.h>

int main(void) {
    int numero, original, invertido;
    
    printf("Digite um numero inteiro de 3 digitos (100 a 999): ");
    scanf("%d", &numero);
    
    // Verifica se o número está no intervalo válido
    if (numero < 100 || numero > 999) {
        printf("Numero invalido! Digite um valor entre 100 e 999.\n");
        return 1;  // encerra o programa com código de erro
    }
    
    original = numero;  // guarda o valor original para exibir depois
    
    // Processo de inversão
    int digito1 = numero % 10;        // pega o último dígito (unidade)
    numero = numero / 10;              // remove o último dígito
    
    int digito2 = numero % 10;         // pega o novo último (dezena)
    numero = numero / 10;              // remove mais um dígito
    
    int digito3 = numero % 10;         // pega o último (centena)
    
    // Reconstrói o número invertido
    invertido = digito1 * 100 + digito2 * 10 + digito3;
    
    printf("Numero lido: %d\n", original);
    printf("Numero invertido: %d\n", invertido);
    
    return 0;
}
