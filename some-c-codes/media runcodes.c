#include <stdio.h>

int main () {
	
	int Nota1,Nota2,Nota3;

	scanf("%i",&Nota1);
    scanf ("%i",&Nota2);
    scanf ("%i",&Nota3);
    
    int media = (Nota1+Nota2+Nota3) /3;
    printf ("Media: %i",media);
    
    return 0;
}
