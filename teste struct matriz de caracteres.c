#include<stdio.h>

struct caracteres{
	char matriz[5][15];
	int i,j,c[5];
};
int main () {
    struct caracteres car;
	
	
	for (car.i =0; car.i<5; car.i++){
		fgets(car.matriz[car.i],15,stdin);
        car.c[car.i] =0;    
		}
    for(car.i=0;car.i<5;car.i++){
        for (car.j=0;car.j<15;car.j++){
        	if ((car.matriz[car.i][car.j] == '\n')){
        		car.matriz[car.i][car.j] = '\0';
			}
			if ((car.matriz[car.i][car.j] == 'a') || (car.matriz[car.i][car.j] == 'e') || (car.matriz[car.i][car.j] == 'i')||(car.matriz[car.i][car.j] == 'o') || (car.matriz[car.i][car.j] == 'u') ){
        		car.c[car.i]++;
			}
	
		}   
 		}

   car.j=0;
	while(car.j<5){
		printf("%s %i\n",car.matriz[car.j],car.c[car.j]);
		car.j++; 
	}
	
	return 0;
}
