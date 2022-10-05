#include <stdio.h>

int main (){
	
	int valor;
	printf("Digite o valor: ");
	scanf("%i",&valor);
	
	if (valor>=0){
		printf("O valor absoluto eh: %i\n",valor);
	}
	else {
		printf("O valor absoluto eh: %i\n",-valor);
	}
	return 0;
	
}
