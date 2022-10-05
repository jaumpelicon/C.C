#include<stdio.h>
#include<stdlib.h>

void ler(int *vetor[10]){
	int cont=0;
	while(cont<10){
		scanf("%i",&vetor[cont]);
		cont++;
	}
}
void imprimir(int *vetor[10]){
	int cont=0;
	while(cont<10){
	printf("%i\n",vetor[cont]);
	cont++;
	}
	
}
int main(){
	int *vetor[10];
	int cont=0,v[10];
	while(cont<10){
		vetor[cont] = &v[cont];
		cont++;
	}
	
	ler(&v[10]);
	imprimir(&v[10]);
	
	
	return 0; 
}
