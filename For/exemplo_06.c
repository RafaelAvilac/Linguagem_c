#include<stdio.h>

int main(){
	
	int n;
	
	printf("Informe um numero para o tamanho do quadrado: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				printf("X ");
			}else {
				printf("O ");
			}
			
			
		}
		printf("\n");
	}
	
	
	return 0;
}
