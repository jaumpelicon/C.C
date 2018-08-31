#include<stdio.h>
void Soma(int a, int b){
   int res;
	res = a+b;
	printf("o resultado da soma eh %d \n",res);
}
int Sub(int a, int b){
  return a-b;
}
int Mult(int a,int b){
	return a*b;
}
float Div(float a,float b){
if (b==0){
	printf("Nao existe divisao por zero\n");
	return 0;
}
	return a/b;
}
int Pot(int a, int b){
 int cont,poten,result;
 if (b == 0){
 	return 1;
 }
 if (b == 1){
 	return a;
 }
 if (a ==1){
 	return 1;
 }
   result = 0; 
 	for (cont=0;cont<b;cont++){
		 result = a*(a*cont);		
	 }
	 return result;
}
int main(){
	int a,b,result;
	scanf("%i %i",&a,&b);	
	Soma(a,b);
    printf(" o resultado da sub eh %i \n",Sub(a,b));
    if (Div(a,b) != 0){
    	printf(" o resultado da div eh %f \n",Div(a,b));
	}
	printf(" o resultado da muult eh %i \n",Mult(a,b)); 
    printf(" o resultado da pot eh %i \n",Pot(a,b));
    
 return 0;
}
