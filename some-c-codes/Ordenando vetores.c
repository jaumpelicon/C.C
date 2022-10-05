#include<stdio.h>
int main(){
	int cont, cont1, n, valores[6];
	
	for(cont = 0; cont < 6; cont++){
		scanf("%i",&valores[cont]);
	}
	for(cont = 0; cont < 6; cont++){
		for (cont1 = 0; cont1 < 6; cont1++){
			if(valores[cont] <  valores[cont1]){
				n = valores[cont];
				valores[cont] = valores[cont1];
				valores[cont1] = n;
			}
		}
	}
	cont = 0;
	while(cont < 6){
		printf("%i ", valores[cont]);
		cont++;
	}		   	
	return 0;
}
