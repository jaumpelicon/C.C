#include<stdio.h>
int main() {
	
	int contador,vetor[6],cont[6];
	for (contador=0;contador<=5;contador++){
		scanf("%i",&cont[contador]);
		//printf("%i ",cont[contador]);
	}
	for (contador = 0; contador<=5; contador ++){
		vetor[contador] = cont[5 - contador ] * cont[5 - contador ];
		printf("%i ",vetor[contador]);
	}
	
	
	
	
	return 0;
}
