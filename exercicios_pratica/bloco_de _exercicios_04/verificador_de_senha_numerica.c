/*Verificador de Senha Numérica
Agora vamos focar na Lógica de Repetição (Loops) e controle de estado.
Objetivo: Praticar contadores e interrupção de laços.
Enunciado:

Defina uma senha numérica fixa no código (ex: 1234).
Peça para o usuário digitar a senha.
Ele tem limite de 3 tentativas.
Se acertar: Mostre "Acesso Permitido" e encerre o programa.
Se errar: Avise que está incorreto.
Se esgotar as 3 tentativas: Mostre "Acesso Bloqueado".*/
#include <stdio.h>
#include <locale.h>


void verificar_login(int senha_sistema){
	int senha_digitada;
	int cont = 1;
	
	do{
		printf("%dª Tentativa.\n", cont);
		printf("Insira sua senha de 6 numeros: ");
		while(scanf("%d", &senha_digitada) != 1){
			printf("Digite apenas números: "); 
			scanf("%d", &senha_digitada);
			while(getchar() != '\n');
		}
		
			
		if(senha_digitada == senha_sistema){
			printf("\n\tAcesso Permitido.\n");
			return;
		}
		printf("\n\tSenha incorreta! Tente novamente.\n\n");
		cont++;
		
		
	}while(cont <= 3);
		printf("\n\tAcesso Bloqueado.\nExcedeu o máximo de 3 tentativas");
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int senha_sistema = 120366;
	
	
	printf("======= LOGIN DO SISTEMA =======\n");
	verificar_login(senha_sistema);
	printf("\n\n--------------------------------\n");
	
	return 0;
}
