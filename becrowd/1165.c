#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5;
    int cont_par = 0, cont_impar = 0, cont_positivo = 0, cont_negativo = 0;
    
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
   
    if (n1 % 2 == 0) {
        cont_par++;
    } else {
        cont_impar++;
    }
    
    if (n1 > 0) {
        cont_positivo++;
    } else if (n1 < 0) {
        cont_negativo++;
    }
    
    
    if (n2 % 2 == 0) {
        cont_par++;
    } else {
        cont_impar++;
    }
    
    if (n2 > 0) {
        cont_positivo++;
    } else if (n2 < 0) {
        cont_negativo++;
    }
    
   
    if (n3 % 2 == 0) {
        cont_par++;
    } else {
        cont_impar++;
    }
    
    if (n3 > 0) {
        cont_positivo++;
    } else if (n3 < 0) {
        cont_negativo++;
    }
    
    
    if (n4 % 2 == 0) {
        cont_par++;
    } else {
        cont_impar++;
    }
    
    if (n4 > 0) {
        cont_positivo++;
    } else if (n4 < 0) {
        cont_negativo++;
    }
    
   
    if (n5 % 2 == 0) {
        cont_par++;
    } else {
        cont_impar++;
    }
    
    if (n5 > 0) {
        cont_positivo++;
    } else if (n5 < 0) {
        cont_negativo++;
    }
    
    printf("%d valor(es) par(es)\n", cont_par);
    printf("%d valor(es) impar(es)\n", cont_impar);
    printf("%d valor(es) positivo(s)\n", cont_positivo);
    printf("%d valor(es) negativo(s)\n", cont_negativo);
    
    return 0;
}
