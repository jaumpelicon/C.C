#include<stdio.h>

int main () {
	int matriz[4][2],matriz2[2][4];
	int i=0,j=0;
	
	for (i = 0; i<4;i++){
		for(j=0;j<2;j++){
			scanf("%i",&matriz[i][j]);
			matriz2[j][i] = matriz[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for (j=0;j<4;j++){
			printf("%i ",matriz2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
