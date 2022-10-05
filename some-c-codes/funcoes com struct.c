#include<stdio.h>
struct fracionario{
   int num;
   int den;
};
typedef struct fracionario frac; //mudando o nome do tipo `struct fracionario` para `frac`
int  soma(struct frac n1,struct  n2 ){
   struct frac resultado;
   resultado.num = n1.num + n2.num; 
   resultado.den = n1.den;
   return resultado;
}
   int main (){
   	struct frac n1,n2,resultado;
   	
   	scanf("%i %i %i %i",n1.num,n1.den,n2.num,n2.den);
   	soma(n1.num,n1.den,n2.num,n2.den);
   	
   	
   	
   	
   }
	
	
	
	return 0;
}
