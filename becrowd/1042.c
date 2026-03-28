//1042
#include<stdio.h>

int main(void){
	
	int a,b,c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < b && a < c){
   		 if(b < c){
        	printf("%d\n%d\n%d\n", a, b, c);
    }else{
        printf("%d\n%d\n%d\n", a, c, b);
    }
}
	
	
	return 0;
}
