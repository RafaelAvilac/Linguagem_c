/*Verificador de Senha Numérica
Objetivo: Praticar contadores e interrupção de laços.
Enunciado: Defina uma senha numérica fixa no código (ex: 1234). Peça para o usuário digitar a senha. Ele tem limite de 3 tentativas.
Se acertar: Mostre "Acesso Permitido" e encerre o programa.
Se errar: Avise que está incorreto.
Se esgotar as 3 tentativas: Mostre "Acesso Bloqueado".*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 3

int verificador(int *senha, int *senha_user, int *cont){
	
	while(*cont <= TAM){
		if(*senha != *senha_user){
			printf("Senha inválida.\n");
			printf("Digite novamente: ");
			scanf("%d", senha_user);
			(*cont)++;
			
			if(*senha == *senha_user){
			return 0;
			}
			
			if(*cont == TAM){
				return 1;
			}
	
		}else {
		
			return 0;
		}
	}

}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int senha = 0003;
	int senha_user, cont = 1, retorno;
	
	printf("===== Verificador de Senha =====\n");
	printf("Digite sua senha de 4 números: ");
	scanf("%d", &senha_user);
	retorno = verificador(&senha, &senha_user, &cont);
	if(retorno){
	
	    printf("Acesso Bloqueado\n");
	    
	}else{
		
		printf("Acesso Permitido.\n");	
	
	}
	
	return 0;
}
