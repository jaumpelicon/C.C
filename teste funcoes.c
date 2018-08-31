#include<stdio.h>
char positivo(int valor){	
if (valor  >= 0){
		return 'P';
	}
	else {
		return 'N';
	}
}
int main(){
int i;
scanf("%d",&i);
printf("%c",positivo(i));


return 0;
}
