#include<stdio.h>

void Soma(int a, int b){
   int res=0;
	res = a+b;
	printf("o resultado da soma eh %d \n",res);
}
void Sub(int x, int y){
   int res=0;
	res = x-y;
	printf("o resultado da sub eh %d \n",res);
}
int main(){
	int a,b;
	scanf("%d %d ",&a,&b);
	
	Soma(a,b);
    Sub(a,b); 
return 0;

}
