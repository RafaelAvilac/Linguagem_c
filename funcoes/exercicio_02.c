#include <stdio.h>

/*2. Contar vogais em uma palavra

Crie uma função que recebe uma string (char[ ]) e retorna a quantidade de vogais.*/



int contar_vogais(char palavra[]){
	
	int cont = 0;
	
	for(int i = 0; palavra[i] != '\0'; i++){
		if(palavra[i] == 'a' || palavra[i] == 'e' || 
  		   palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
   		
		    cont++;
		}
	}
	
	return cont;
	
}


int main(){
	
	char palavra[15];
	int total;
	
	printf("Informe uma palavra: ");
    scanf("%s", palavra);
    
    total = contar_vogais(palavra);
    
    printf("A palavra tem um total de %d vogais", total);
	
	return 0;
}
