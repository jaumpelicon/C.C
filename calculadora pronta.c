#define slogan "Calculadora em C - Versao: "
#define versao "1.0"
#define autor "Andre Junior"
#define line "---------------------"
#define resultadosoma num1+num2
#define resultadosubtraco num1-num2
#define resultadomult num1*num2
#define resultadodiv num1/num2

#include<stdio.h>
#include<stdlib.h>


//conteudo do menu "soma"
int soma(int num1, int num2){

    printf("\nA soma de %d com %d e: %d",num1, num2, resultadosoma);
    return (0);
}

//conteudo do menu "subtrair"
int subtrai(int num1, int num2){

    printf("\nA subtracao de %d por %d e: %d",num1, num2,  resultadosubtraco);
    return (0);
}
//conteudo do menu "multiplicar"
int multiplica(int num1, int num2){

    printf("\nA multiplicacao de %d por %d e: %d",num1, num2,  resultadomult);
    return (0);
}

//conteudo do menu "subtrair"
int divide(int num1, int num2){
    if(num1>num2) {
    printf("\nA divisao de %d por %d e: %d",num1, num2, resultadodiv);
    return (0);
    }else{
        printf("O entre com um divisor menor... ");
        system("clear");
        return 0;
}
}

int main(){

    //declaracao de variaveis
    int opc, num1, num2;

    printf("%s %s\n%s\n",slogan, versao, line);

    //solicita dados
    printf("Entre com o primeiro numero: ");
    scanf("%d",&num1);
    printf("Entre com o segundo numero: ");
    scanf("%d",&num2);
    getchar();

    //solicita operacao
    printf("Escolha a operacao que deseja realizar:");
    printf("\n[1] Somar\n[2] Subtrair\n[3] Multiplicar\n[4] Dividir\n");
    printf("Qual opcao voce escolhe? ");
    scanf("%d",&opc);
    getchar();

    switch(opc){

        case 1:
        //soma:
        soma(num1,num2);

        break;

        case 2:
        //subtrai
        subtrai(num1,num2);

        break;

        case 3:
        //multiplica
        multiplica(num1,num2);

        break;

        case 4:
        //divide
        divide(num1,num2);

        break;

    }

    printf("\n\n\nAutor: %s\n",autor);
    return (0);
}
