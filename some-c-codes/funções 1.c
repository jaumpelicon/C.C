#include<stdio.h>
int ehVogal(char l){
	if ((l == 'a') || (l == 'e') || (l =='i') || (l == 'o') || (l == 'u')){
		return 1;
	}
	else {
		return 0;
	}
}


int main(){
        char letra;
    int resposta;
    printf("Digite uma letra:\n");
    scanf("%c",&letra);
    resposta = ehVogal(letra);
    if(resposta == 1){
        printf("\nA letra %c eh uma vogal.\n",letra);
    }else{  
        printf("\nA letra %c nao eh uma vogal.\n",letra);
    }
return 0;
}
	
