#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int matriz[5][4], i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			matriz[i][j] = rand() % 100 + 1;
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
		printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
}
