#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
TAD = Tipo de Dado Abstrato
Representa uma fracao
*/
typedef struct _frac
{
    int numerador, denominador;
} FRACAO;

/*
Variaveis globais utilizadas nas funções...
*/
FRACAO frac1;
FRACAO frac2;
FRACAO resultado;
int aux;

/*
Procedimento que zera as globais...
*/
void limpar();

/*
Função que retorna a versão simplificada (no max 10 vezes) de uma fração passada por parametro.
***NAO TERMINADA AINDA***
*/
FRACAO simp(FRACAO fracao);

/*
Calculos de MMC (Minimo Multiplo Comum) e MDC(Maximo Divisor Comum).
Baseado na Teoria dos Numeros, retorna 0 qd um dos parametros for 0. Senão, usa um algoritmo simples
junto com o algoritmo Euclidiano (sem factorização) - usado na função de MDC de maneira recursiva.
*/
int MDC (int a, int b);
int MMC (int a, int b);

/*
Soma = Se os denominadores são iguais, soma-se apenas os numerados. Senão, utiliza MMC + um algoritmo simples...
Subtração = Mesmo procedimento acima, mas ao inves de somar no caso de denominadores iguais, subtrai...
Multiplicação = Numerador * Numerador; Denominador * Denominador.
Divisão = Mantem a primeira fração, inverte a segunda e executa o processo de multiplicação das funções...
Obs.: O processo é praticamente o mesmo, então usa-se a mesma função apenas com uma inversão de sinais na função fracao_soma_sub();
      A diferença entre o processo multiplicação e divisão tbm é pequena,
        então usa-se apenas uma condição que acrescenta alguns detalhes ao algoritmo.
*/
FRACAO fracao_soma_sub (FRACAO fracao[2],char tipo);
FRACAO fracao_mult_div (FRACAO fracao[2],char tipo);

int main ()
{
    FRACAO fracao[2];
    int i, numerador, denominador;

    for(i=0; i<2; i++)
        {
            printf("Digite um numerador e um denominador para a fracao. \n Utilize espaco para separa-los [%d]: ",i+1);
            scanf("%d %d",&fracao[i].numerador, &fracao[i].denominador);
        }
   printf ("\n\t%d   %d\n\t- + -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_soma_sub(fracao,'+');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf ("\n\t%d   %d\n\t- - -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_soma_sub(fracao,'-');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf ("\n\t%d   %d\n\t- * -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_mult_div(fracao,'*');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf ("\n\t%d   %d\n\t- / -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_mult_div(fracao,'/');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);

    getchar ();

    return (0);

}

void limpar()
{
    resultado.denominador = 0;
    resultado.numerador = 0;

    frac1.denominador = 0;
    frac1.numerador = 0;

    frac2.denominador = 0;
    frac2.numerador = 0;

    aux = 0;

}


int MDC(int a, int b)
{
    if (b == 0)
        return a;
    else
        return MDC(b,fmod(a,b));
}

int MMC(int a, int b)
{
    if (a != 0 && b != 0)
        return a*b/MDC(a,b);
    else
        return 0;
}

FRACAO fracao_soma_sub(FRACAO fracao[2],char tipo)
{

    limpar();

    if (fracao[0].denominador == fracao[1].denominador)
        {
            if(tipo == '+')
                resultado.numerador = fracao[0].numerador + fracao[1].numerador;

            else
                resultado.numerador = fracao[0].numerador - fracao[1].numerador;

            resultado.denominador = fracao[0].denominador;
        }

    else
        {

            aux = MMC(fracao[0].denominador,fracao[1].denominador);

            frac1.numerador = (aux/fracao[0].denominador)*fracao[0].numerador;
            frac2.numerador = (aux/fracao[1].denominador)*fracao[1].numerador;

            if (tipo == '+')
                resultado.numerador = frac1.numerador + frac2.numerador;

            else
                resultado.numerador = frac1.numerador - frac2.numerador;


            resultado.denominador = aux;

        }

    return resultado;
}

FRACAO fracao_mult_div(FRACAO fracao[2],char tipo)
{
    limpar();
    if (tipo == '*')
        {
            resultado.numerador = fracao[0].numerador*fracao[1].numerador;
            resultado.denominador = fracao[0].denominador*fracao[1].denominador;
        }
    else
        {
            resultado.numerador = fracao[0].numerador*fracao[1].denominador;
            resultado.denominador = fracao[0].denominador*fracao[1].numerador;
        }

    return resultado;
}  
