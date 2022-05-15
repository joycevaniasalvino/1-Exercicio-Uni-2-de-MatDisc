#include <stdio.h>

int main (){
	int n, i, fat=1;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Este numero eh negativo!");
		exit(0);
	}
	else if(n == 0 || n == 1){
		printf("%d!  =  1", n);
		exit(0);
	}
	else
		printf("%d!  =  ",n);
		
	
	for(i=n; i>1; i--){
		
		fat = fat*i;
		
		printf("%d x ", i);
			
	}
	
	printf("1 = %d",fat);
	
	return 0;
}
