#include<stdio.h>
int main(){
	
	int maiores=0,i,n,limite=8;
	scanf("%i",&n);
	int peso[n];
	for(i=0;i<n;i++){
		scanf("%i",&peso[i]);
	}
	for(i=0;i<n;i++){
		if (peso[i]>limite){
			maiores = maiores + peso[i];
		}
		else{
			limite = limite + peso[i];
		}
	}
	if (maiores>limite){
		printf("N");
	}
	else{
		printf("S");
	}
	return 0;
}
