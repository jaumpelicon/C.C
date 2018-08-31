#include<stdio.h>

int main () {
	
	int vetor[3],matriz[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
	  for(j=0;j<3; j++){
	  	scanf("%i",&matriz[i][j]);
	  
	  }
	}
		for(j=0;j<3;j++){
		vetor[j] = matriz[0][j] + matriz[1][j] + matriz[2][j];
		}
	
	
	
  for(i=0;i<3;i++){
	printf("%i ",vetor[i]);
	
} 
	
	return 0;
}
