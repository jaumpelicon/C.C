#include <stdio.h>

int soma(int x, int y){
	return (x+y);
}
int produto(int x, int y){
	return (x*y);
}
int maior(int x, int y){
	if (x > y){
		return x;
	}
	else {
		return y;
	}
}
int main(){
	int x=0,y=0,op;
    printf("Entre com o primeiro numero: ");
    scanf("%d",&x);
    printf("Entre com o segundo numero: ");
    scanf("%d",&y);
     printf("Escolha a operacao que deseja realizar:");
    printf("\n[1] Somar\n[2] Multiplicar\n[3] Qual eh o maior\n");
    printf("Qual opcao voce escolhe? ");
    scanf("%d",&op);
    
    switch (op){
    	case 1: 
    	soma(x,y);

		break;
		case 2: 
    	produto(x,y);

		break;
	
	
		case 3: 
    	maior(x,y);
		break;
	
    	
		
		}
 
 
}
