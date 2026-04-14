#include <stdio.h>

int main(void){
	
	int x, i;
	
	do{
		scanf("%d", &x);
		if(x != 0){
		
			i = 1;
			printf("%d", i);
			i++;
		
			while( i <= x){
				printf(" %d", i);
				i++;
			}
			 printf("\n");
		}	 
	}while(x != 0);
	
	
	return 0;
}
