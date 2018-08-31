#include <stdio.h>
int main () {
	
	//Mostragem de variáveis
	int tarifa,cabo,instalacao,metro,receita,preco_cabo;
	
	//Entrada de variáveis
	 printf("Tarifa basica: \n");
	 scanf ("%i",&tarifa );
	 printf("Custo por cada 20 cm de cabo: R$ \n");
	 scanf("%i",&cabo);
	 printf("Numero de instalacoes: \n");
	 scanf("%i",&instalacao);
	 printf("Metros de Cabo: \n");
     scanf("%i",&metro);
	//Operações
     preco_cabo = cabo * 5;
     receita = (tarifa * instalacao) + (preco_cabo * metro);
    //Impressão do resultado final 
	printf ("Receita Gerada: R$ %i\n",receita);
    
	return 0 ;	
	
}
