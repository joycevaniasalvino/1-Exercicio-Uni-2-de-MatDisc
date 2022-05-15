#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char banco_de_dados[3][10];
	
	strcpy(banco_de_dados[0],"SQL");
	strcpy(banco_de_dados[1],"NoSQL");
	strcpy(banco_de_dados[2],"G|S");
	
	char programacao[4][10];
	
	strcpy(programacao[0],"Python");
	strcpy(programacao[1],"Java");
	strcpy(programacao[2],"C");
	strcpy(programacao[3],"PHP");
	
	char eng_de_software[2][25];
	
	strcpy(eng_de_software[0],"Métodos Ágeis");
	strcpy(eng_de_software[1],"Processos de Software");
	
	
	printf("Disciplinas de Banco de Dados:  SQL, NoSQL, G|S\n");
	printf("Disciplinas de Programação:  Python, Java, C, PHP\n");
	printf("Disciplinas de Eng. de Software:   Métodos Ágeis, Processos de Software\n\n\n");
	

	
	int i, j, k, opcao;
	
	printf("Digite quantas disciplinas você deseja obter as possibilidades ou combinações diferentes: ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("\n");
			printf("Existem 9 possibilidades:");
			printf("\n\n");
			for(i=0; i<3; i++){
				printf("     %s\n\n",banco_de_dados[i]);
			}
			for(j=0; j<4; j++){
				printf("     %s\n\n",programacao[j]);
			}
			for(k=0; k<2; k++){
				printf("     %s\n\n",eng_de_software[k]);
			}
			break;
		
		case 2:
			printf("\n");
			printf("Existem 26 combinações:\n\n");
			printf("\n");
			for(i=0; i<3; i++){
 
				for(j=0; j<4; j++){
					
					printf("     %s, ",banco_de_dados[i]);
					printf("%s\n\n",programacao[j]);
				}
			}
			for(i=0; i<3; i++){
 
				for(k=0; k<2; k++){
					
					printf("     %s, ",banco_de_dados[i]);
					printf("%s\n\n",eng_de_software[k]);
				}
			}
			for(j=0; j<4; j++){
 
				for(k=0; k<2; k++){
					
					printf("     %s, ",programacao[j]);
					printf("%s\n\n",eng_de_software[k]);
				}
			}
			break;
			
		case 3:
			printf("\n");
			printf("Existem 24 combinações:\n\n");
			printf("\n");
			for(i=0; i<3; i++){
	 
				for(j=0; j<4; j++){
			
					for(k=0; k<2; k++){
						printf("     %s, ",banco_de_dados[i]);
						printf("%s, ",programacao[j]);
						printf("%s\n\n",eng_de_software[k]);
					}
				}
			}
			break;
		default:
			printf("\nNúmero de combinações diferentes inválido!");
	}
	

	
	return 0;
}
