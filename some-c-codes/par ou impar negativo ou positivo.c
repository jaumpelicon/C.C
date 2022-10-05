#include<stdio.h>
int main () {
	
	int valor;
	scanf ("%i",&valor);
	if (valor == 0){
		printf("Zero e par");
	}
	else{
		if (valor % 2 ==0){
			printf("Par e ");
		if(valor > 0){
			printf("positivo");
		}
		if (valor<0) {
			printf("negativo");
	}	}
		else{
			printf("Impar e ");
				if(valor > 0){
			printf("positivo");
		}
		if (valor<0) {
			printf("negativo");
	}
		}
	}

	return 0;
}
