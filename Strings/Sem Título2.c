#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*    |    |  Copiando uma String com a função strcpy()
*/

int main() {
    char palavral[50] = {"bola"}; // \0
    char palavra2[50] = {"abacate"};

    printf("\nAntes de copiar:\npalavra 1: %s\npalavra2: %s\n", palavral, palavra2);

    strcpy(palavra2, palavral);

    printf("\nDepois de copiar:\npalavra 1: %s\npalavra2: %s\n", palavral, palavra2);

    return 0;
}
