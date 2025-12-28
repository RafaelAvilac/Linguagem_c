#include <stdio.h>
#include <locale.h>



void preencher(char nomes[][15]){
	
	for(int i = 0; i < 2; i++){
		printf("Informe %dº nome: ", i + 1);
		scanf("%14s", nomes[i]);
	}		
}
int comparar(char nomes[][15]) {
    // Percorremos até o final da primeira string
    for(int i = 0; ; i++) {
        // Se os caracteres forem diferentes, as strings não são iguais
        if(nomes[0][i] != nomes[1][i]) {
            return 0;
        }
        // Se chegamos ao fim de uma (e como são iguais até aqui, chegamos ao fim de ambas)
        if(nomes[0][i] == '\0') {
            break;
        }
    }
    return 1;
}
int main(){
	
	setlocale(LC_ALL, "");
	
	char nomes[2][15];
	preencher(nomes);
	
	if (comparar(nomes)) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
	
	return 0;
}
