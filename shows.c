#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char safadao[4][20];
	
	strcpy(safadao[0],"Rom�nticas");
	strcpy(safadao[1],"Antigas");
	strcpy(safadao[2],"Carnaval");
	strcpy(safadao[3],"Modernas");
	
	char calcinha_preta[2][20];
	
	strcpy(calcinha_preta[0],"Nacional");
	strcpy(calcinha_preta[1],"Internacional");
	
	printf("Shows de Safad�o:  Rom�nticas, Antigas, Carnaval , Modernas\n");
	printf("Shows de Calcinha Preta:  Nacional, Internacional\n\n");
	
	
	printf("Existem 6 possibilidades, se sua escolha for apenas 1 show entre os 6.\n\n");
	
	printf("Existem 8 combina��es para escolha, um tipo de cada show, resultando em 2 shows em cada combina��o:\n\n");
	
	int i, j;
	
	for(i=0; i<4; i++){
	 
		for(j=0; j<2; j++){
			
			printf("     %s, ",safadao[i]);
			printf("%s\n\n",calcinha_preta[j]);
		}
	}
	
	return 0;
}
