#include <stdio.h>
#define TAM 10
int main(void){
	 
	 
	int n;
	printf("******************\n");
	printf("*    Tabuada     *\n");
    printf("******************\n\n");
    
    printf("Informe o numero para descobrir sua tabuada: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= TAM; i++){
    	printf("%3d x %3d = %3d\n", n, i, n * i );
	}
    
	return 0;
}
