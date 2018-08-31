#include <stdio.h>

int main(){
	int valorBi, binario[100],cont, valor,i;
  	int cont1;
	  for(cont1=0;cont1<100;cont1++){
	  binario[cont1] = 0;
	  }	

	do{
		cont = 0;
		scanf("%i", &valorBi);
		valor = valorBi;
		
		do{
			if(valorBi%2 == 0){
				printf("\n\nDecimal: %i\nBinario: ", valorBi);
				for(i=cont;i>=0;i--){
					printf("%i",binario[i]);
				}
		
				binario[cont] = 0;
				valorBi = valorBi/2;
				cont++;
			}
			else if(valorBi%2 == 1){
				printf("\n\nDecimal: %i\nBinario: ", valorBi);
				for(i=cont;i>=0;i--){
					printf("%i",binario[i]);
				}
		
				binario[cont] = 1;
				valorBi = valorBi/2;
				cont++;
			}
		
		}while(valorBi >= 1);
		
		printf("\n\nDecimal: %i\nBinario: ", valor);
		for(i=cont-1;i>=0;i--){
			printf("%i",binario[i]);
		}
		printf("\n\n");
		
	}while(EOF);
	
	return 0;
}
