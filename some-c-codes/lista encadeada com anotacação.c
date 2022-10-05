#include <stdio.h>
#include <stdlib.h>
//criando tad= tipo abstrato de dado ou seja encapsulamento dos tipos simples e compostos de dados e ele proprio
typedef struct SNo{
    int chave;
    struct SNo *prox;
}SNo;
//Inicio da lista ... sempre apontada para null
SNo *Inicio = NULL;
//função para inserir valores na lista 
void insere(int valor) {
    SNo *Novo = malloc(sizeof(SNo));
    Novo->chave = valor;
    Novo -> prox = Inicio;
    Inicio = Novo;
}
//função para imprimir a lista
void imprime() {
	if(Inicio ==NULL ){
		printf("Lista Vazia\n");
		return;
	}
	SNo *Novo =	Inicio;
	while(Novo != NULL){
		printf(" %i \n",Novo->chave);
		Novo = Novo->prox;
	}
}
//função para buscar valores na lista
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
//função para remover uma celula da nossa lista
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
	 /* Jeito gambiarra
	 void busca_remove(int valor){
   		 if (Inicio == NULL){
    	printf("Lista Vazia \n");
    	return ;
		}
		else{
		SNo *temp,*ant;
        ant = Inicio;
        temp = Inicio;
        while(temp != NULL && temp->chave != valor){
                ant = temp;
                temp = temp->prox;
            }
         if(temp->chave == valor){
         	ant->prox  = temp->prox;
         	free(temp);
		 }
		 if(ant->chave == valor){
			Inicio = ant->prox;
			free(ant);
		 }
	}
}*/
int main() {
//declaração de variaveis 
 int input, valor;
 // menu com switch case para manusear minha lista 
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
    //jeito sem firula para manusear nossa lista
 /*   insere(20);
    insere(6);
    insere(2);
    insere(30);
 	insere(15);
    imprime();
    busca(6);
    busca(1);
    busca_remove(15);
    imprime();
*/
	return 0;
}
