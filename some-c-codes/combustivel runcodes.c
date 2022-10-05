#include <stdio.h>

int main () {

	float horas , km;
	float combustivel;
	scanf("%f",&horas);
	scanf("%f",&km);
	combustivel = (km/7)*horas;
	printf ("%.3lf \n",combustivel);
	
	
	return 0;
		
}
