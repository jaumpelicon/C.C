#include <stdio.h>
int main () {
	
	//Mostragem de vari�veis
	int tarifa,cabo,instalacao,metro,receita,preco_cabo;
	
	//Entrada de vari�veis
	 printf("Tarifa basica: \n");
	 scanf ("%i",&tarifa );
	 printf("Custo por cada 20 cm de cabo: R$ \n");
	 scanf("%i",&cabo);
	 printf("Numero de instalacoes: \n");
	 scanf("%i",&instalacao);
	 printf("Metros de Cabo: \n");
     scanf("%i",&metro);
	//Opera��es
     preco_cabo = cabo * 5;
     receita = (tarifa * instalacao) + (preco_cabo * metro);
    //Impress�o do resultado final 
	printf ("Receita Gerada: R$ %i\n",receita);
    
	return 0 ;	
	
}
