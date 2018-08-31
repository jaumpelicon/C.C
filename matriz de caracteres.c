#include<stdio.h>

int main () {
	
    char matriz[5][15];
	int i,j,c[5];
	
	
	for (i =0; i<5; i++){
		fgets(matriz[i],15,stdin);
        c[i] =0;    
		}
    for(i=0;i<5;i++){
        for (j=0;j<15;j++){
        	if ((matriz[i][j] == '\n')){
        		matriz[i][j] = '\0';
			}
			if ((matriz[i][j] == 'a') || (matriz[i][j] == 'e') || (matriz[i][j] == 'i')||(matriz[i][j] == 'o') || (matriz[i][j] == 'u') ){
        		c[i]++;
			}
	
		}   
 		}

j=0;
	while(j<5){
		printf("%s %i\n",matriz[j],c[j]);
		j++; 
	}
	
	return 0;
}
