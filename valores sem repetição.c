 #include<stdio.h>
int main () {
	
	int n,cont,cont1,vetor[6];
cont = 0;
while(cont<6){
	scanf("%i",&n);
	cont1 = 0;
	while(cont1<6){
		if (n == vetor[cont1]){
			cont1 = 7;
		}
		else{
			cont1 ++;
		}
	}
	if(cont1 == 6){
		vetor[cont] = n;
		cont ++;
	}	
}
	cont = 0;	
while (cont<6){
	printf("%i ",vetor[cont]);
	cont ++;
}	
	return 0;
}
