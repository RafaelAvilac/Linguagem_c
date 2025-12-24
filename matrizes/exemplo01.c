#include <stdio.h>

int main(){
	
	int notas [3][2] = {
	{3,2},
	{5,10},
	{6,8}
	};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf("%d\t", notas[i][j]);
		}
		printf("\n");
	}
	printf("\n\n%d", notas[0][1]);
	return 0;
}
