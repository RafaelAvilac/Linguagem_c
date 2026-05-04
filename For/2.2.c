/*Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para
cada leitura de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha
for informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve
ser encerrado. Considere que a senha correta é o valor 123456.*/

#include<stdio.h>
#define SENHA 123456
int main(){
	
	int senha_user = 0;
	
	while(1){
	
	printf("Digite sua senha numerica: ");
	scanf("%d", &senha_user);
	
		if(senha_user == SENHA){
			printf("Acesso Permitido\n");
		
			break;
		}else{ 
			printf("Senha Invalida\n\n");
		}
	
	}
	
	return 0;
}
