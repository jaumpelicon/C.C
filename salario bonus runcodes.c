#include<stdio.h>

int main () {
	char nome[60];
	double n1,n2;
	scanf("%s",&nome);
	scanf("%lf%lf",&n1,&n2);
	double total = n2 *15 /100 + n1 ;
	printf("TOTAL = R$ %.2f",total );
	
	return 0;
	
	
}
