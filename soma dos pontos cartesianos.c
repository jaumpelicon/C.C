#include <stdio.h>
#include <stdlib.h>

struct Ponto{
    int soma,x;
    int y;
};


int main() {
    struct Ponto p,p1;
   scanf("%i %i",&p.x,&p.y);
    scanf("%i %i",&p1.x,&p1.y);
    p.soma = p.x + p1.x;
    p1.soma = p.y + p1.y;
    
    printf("O resultado da soma eh: (%i,%i)",p.soma,p1.soma);
	
	return 0;
}
