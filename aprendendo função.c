#include <stdio.h>
 void lerMatriz(int m[4][2]){
 	int l,c;
	//zerando matriz
 	for(l=0;l<4; l++){
 		for(c=0;c<2;c++){
 		m[l][c] = 0;
		 }
	 //lendo valores da matriz
 	for(l=0;l<4; l++){		
 		for(c=0;c<2;c++){
 			scanf("%i",&m[l][c]);
		 }
	 }
 }
}
void imprimirMatriz(int m[4][2]){
	 int l,c;
	 //imprimindo matriz
	 for(l=0;l<4; l++){
 		for(c=0;c<2;c++){
 			printf("%i ",m[l][c]);
		 }
		 printf("\n");
	 }	
}
void somarMatriz(int m[4][2],int v[4]){
	int l;
	for (l = 0; l<4;l++){
		v[l] = m[l][0] + m[l][1];
	}
	/*for(l=0;l<4;l++){
		printf("%i\n",v[l]);
	}*/
}
 int main (){
 	
 	int matriz[4][2];
 	int v[4];
 	int l=0,c;
 	lerMatriz(matriz);
	//imprimirMatriz(matriz); 
 	somarMatriz(matriz,v);
 	for(l=0;l<4;l++){
 		printf("%i\n",v[l]);
	 }
	return 0;
 } 
