#include<stdio.h>
#include<stdlib.h>

/* TAD: Tipo abstrato de dados � o encapsulamentos de tipos simples(int,char,float,double) e compostos de dados (string) e ele pr�prio(SNo).
� implementado usando struct na linguagem C.Como sequencia,voce cria um novo tipo de dado
*/
typedef struct SNo{
	int valor,;
	struct SNo *chave,*prox;	
//	struct SNo *ant		
}SNo;
//Fun�ao insere esta alocando um novo bloco no inicio da lista
void insere(int valor){
	SNo *Novo = (SNo)malloc(sizeof(SNo));
	Novo->chave = valor;
	Novo->prox = va
}
// Declarar na main se for varias listas 	
	SNo *Inicio = NULL ;
	Inicio->prox;

//Aloca��o Est�tica
	int agenda[200];

/*Aloca��o din�mica = cresce de acordo com a necessidade nao tendo um limite definido , para de alocar quando nao tem mais memoria 
 encadeamento de informa��es em bloco (caderno tem exemplos);
 Oque diferencia a aloca��o estatica da aloca��o dinamica � a falta de ponteiro na aloca��o estatica
 */

//Campo de informa��es 
typedef struct cadastro{
	char[] nome;
	char[] telefone;
	char[] endereco;
	int idade;
}cadastro;

 
