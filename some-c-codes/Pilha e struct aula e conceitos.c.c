#include<stdio.h>
#include<stdlib.h>

/* TAD: Tipo abstrato de dados é o encapsulamentos de tipos simples(int,char,float,double) e compostos de dados (string) e ele próprio(SNo).
É implementado usando struct na linguagem C.Como sequencia,voce cria um novo tipo de dado
*/
typedef struct SNo{
	int valor,;
	struct SNo *chave,*prox;	
//	struct SNo *ant		
}SNo;
//Funçao insere esta alocando um novo bloco no inicio da lista
void insere(int valor){
	SNo *Novo = (SNo)malloc(sizeof(SNo));
	Novo->chave = valor;
	Novo->prox = va
}
// Declarar na main se for varias listas 	
	SNo *Inicio = NULL ;
	Inicio->prox;

//Alocação Estática
	int agenda[200];

/*Alocação dinâmica = cresce de acordo com a necessidade nao tendo um limite definido , para de alocar quando nao tem mais memoria 
 encadeamento de informações em bloco (caderno tem exemplos);
 Oque diferencia a alocação estatica da alocação dinamica é a falta de ponteiro na alocação estatica
 */

//Campo de informações 
typedef struct cadastro{
	char[] nome;
	char[] telefone;
	char[] endereco;
	int idade;
}cadastro;

 
