#include<stdio.h>
int soma(int *x , int *y){
	return (*x + *y);
}		
float div(int *x,int *y){
	return  (float)*x / (float)*y;
}
int mult(int *x, int *y){
	return *x * *y;
}
int sub (int *x, int *y){
	return *x - *y;
}
int Pot(int *x, int *y){
 int cont,poten,result;
 if (*y == 0){
 	return 1;
 }
 if (*y == 1){
 	return *x;
 }
 if (*x == 1){
 	return 1;
 }
   result = 0; 
 	for (cont=0;cont < *y;cont++){
		 result = *x *(*x * cont);		
	 }
	 return result;
}
int main(){
	 
	int a,b,*x,*y;
	scanf("%i %i",&a,&b);
	x = &a;
	y = &b;
	
	printf(" soma = %i \n subt = %i \n multp = %i \n pot = %i \n", soma(&a , &b),sub(&a , &b),mult(&a,&b),Pot(&a,&b));
	if(*y == 0){
		printf("Nao existe divisao por zero \n");
	}
	else{
		printf("div = %.2f \n",div(&a , &b));
	}
	return 0;
}
