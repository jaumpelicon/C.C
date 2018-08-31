#include <stdio.h>
//n sei o que ta fazendo
int main () {
	
	int cont,vetor[10];
	
	for (cont = 0 ; cont < 10; cont ++){
     scanf("%i",&vetor[cont]);
	} 
	
	for (cont = 0 ; cont < 10 ; cont ++){
		vetor[cont] = vetor[cont] * vetor[cont];
	} 		
	
	for(cont = 0 ; cont < 10 ; cont ++){
	printf ("%i \n",vetor[cont]);	
	}
	
	
	return 0;
}
