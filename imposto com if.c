#include <stdio.h>

int main () {
	
	double valor,total,imp1,imp2,imp3,imp4,imp5,conta1,conta2,conta3,conta4,conta5;
	scanf("%lf",&valor);
	imp1 = 0.2;
	imp2 = 0.18;
	imp3 = 0.14;
	imp4 = 0.1;
	imp5 = 0.04;
	
	if( valor >0 && valor <=199.99) {
		conta1 = valor * imp1;
        total = conta1 + valor;
        printf("%.2lf",total);
	}
	if( valor>=200.00 && valor <=749.99){
		conta2 = valor * imp2;
		total = conta2 + valor;
		printf("%.2lf",total);
	}
	if (valor >=750.00 && valor<=1499.99){
		conta3 = valor * imp3;
		total = conta3 + valor;
		printf("%.2lf",total);
	}
   if (valor>=1500.00 && valor<=2499.99){
   	conta4 = valor * imp4;
   	total = conta4 + valor;
   	printf("%.2lf",total);
   }
if ( valor >=2500.00 && valor<=3999.99){
	conta5 = valor * imp5;
	total = conta5 + valor;
	printf("%.2lf",total);
}
if (valor>=4000.00){
	printf("%.2lf",valor);
}
if(valor < 0){
	printf("ERRO");
}

return 0 ;
}

