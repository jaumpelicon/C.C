#include <stdio.h>
int main (){
	int n=20;
	int cont = 0,vetor[n];
	for(cont=0;cont<n;cont++){
	scanf("%i",&vetor[cont]);		
    } 
	cont = 0;
	while(cont<=n){
		if(vetor[cont] == cont ){
			printf("%i ",vetor[cont]);
		}
		cont ++;
	}
	
	return 0;
}

