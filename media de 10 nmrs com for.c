#include <stdio.h>
int main () {
	
	int valor,soma,contador;
	float media;

    contador = 1;
	
	while (contador <= 10){	
	scanf("%i",&valor);
	contador ++;
	soma = soma + valor;
}
	  media = (soma) / 10.0;
	  printf ("A media eh: %.2f \n",media);

	return 0;
}
