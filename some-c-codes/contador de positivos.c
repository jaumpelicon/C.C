#include <stdio.h>

int main () {
	//Variaveis
	double soma,v1,v2,v3,v4,v5,media;
	int contador;
	//Declaração de valores
	contador = 0;
	soma = 0.0;
	//leitura de variaveis
	 scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&v4,&v5);
	//condições
	if (v1 >= 0){
		contador = contador + 1;
		soma = soma + v1;
	}
	if(v2>=0){
		contador = contador + 1;
		soma = soma +v2;
	}
		if(v3>=0){
		contador = contador + 1;
		soma = soma +v3;
	}	if(v4>=0){
		contador = contador + 1;
		soma = soma +v4;
	}	if(v5>=0){
		contador = contador + 1;
		soma = soma +v5;
	}
	if (contador ==0){
		printf("Nao ha numeros positivos, impossivel calcular media\n");	
	}
	if(contador>0){
		media = soma/contador;
		printf("Positivos: %i\n",contador);
		printf("%.2lf",media);	
	}
return 0;
	
}
