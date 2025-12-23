#include <stdio.h>

int main(){
	
	int scores[5], recorde = 5000;
	
	
	printf("Digite os 5 scores do jogador:\n\n");
	
	for(int i = 0; i < 5; i++){
		printf("score %d: ", i + 1);
		scanf("%d", &scores[i]);
		if(scores[i] > recorde){
			recorde = scores[i];
			printf("Parabens! Score %d superou o recorde!\n", recorde);
	
		}	
	}
	
	return 0;
}
