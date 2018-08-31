#include<stdio.h>

int main () {
	
	int maior, menos, contador = 0,numeros;
	
	scanf("%i", &numeros);
	
	menos = numeros;
	maior = numeros;
	
	if(numeros >= 0){
		while (numeros >= 0){
		scanf ("%i",&numeros);
			contador ++;	
		if((numeros > maior) && (numeros >= 0)){
			maior = numeros;	
		}	
		if((numeros < menos) && (numeros >= 0)){
			menos = numeros;
			 
		}		
		}
	}
		printf("O maior eh %i, ",maior);
		printf("o menor eh %d ",menos);
		printf("e a quantidade eh %i.",contador);	
        
	return 0;
}
