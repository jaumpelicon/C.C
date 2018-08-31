#include <stdio.h>
#include <stdlib.h>
typedef struct SNo{
    int chave;
    struct SNo *prox;
}SNo;
SNo *Inicio = NULL;
void insere(int valor) {
    SNo *Novo = malloc(sizeof(SNo));
    Novo->chave = valor;
    Novo -> prox = Inicio;
    Inicio = Novo;
}
void imprime() {
	if(Inicio ==NULL ){
		printf("Lista Vazia\n");
		return;
	}
	SNo *Novo =	Inicio;
	while(Novo != NULL){
		printf(" %i -> ",Novo->chave);
		Novo = Novo->prox;
	}
	printf("\n");
}
void busca(int valor) {
	SNo *Novo = Inicio;
	int cont=0;
	if(Novo == NULL){
		printf("Lista Vazia \n\n");
		return;
	}
	else{
		while(Novo != NULL){
			if(Novo->chave == valor){
				printf("achei o valor %i! \n\n",valor);
				cont++;
			}
		Novo = Novo->prox;
		}
		if (cont == 0){
			printf("nao achei o valor %i \n\n ",valor);
		}
	}
}
    void busca_remove(int valor){
    	SNo *temp=Inicio,*ant=Inicio;
    	
    	while(temp != NULL){
    		if(temp->chave == valor){
    			if(temp==Inicio){
    				Inicio = temp->prox; 
				}
				else{
					ant->prox = temp->prox;
    				free(temp);
    				return;
				}
    		}
			else{
				ant=temp;
				temp=temp->prox;
			}
							
		}
	}
	 
int main() {
 int input, valor;
 
    while(1){
        printf("1. Insere\n");
        printf("2. Imprime\n");
        printf("3. Busca\n");
        printf("4. Sair\n");
        printf("5. Remove\n");
		printf("Option: ");
        scanf( "%d", &input);
         
        switch(input) {
            case 1:
                printf("Informe o valor a ser inserido:\n");
                scanf("%d", &valor);
                insere(valor);
                break;
            case 2:
                imprime();
                break;
            case 3:
                printf("Informe o valor a ser buscado:\n");
                scanf("%d", &valor);
                busca(valor);
                break;
            case 4:
                printf("Finalizando programa!\n");
                exit(1);
            case 5:
            	printf("Informe o valor a ser removido:\n");
            	scanf("%d",&valor);
            	busca_remove(valor);
            	break;
			default:
                printf("Digite uma opcao valida!\n");
        }
    }
	return 0;
}
