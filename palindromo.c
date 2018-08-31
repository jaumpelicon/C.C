#include <stdio.h>

int main () {

	char palavra[5];
	
	printf("Informe 5 letras:\n");
	scanf("%s",palavra);
	
    if ((palavra[0] == palavra[4]) && (palavra [1]  == palavra[3]) && (palavra[2] == palavra[2])){
    	
    	printf ("a palavra eh palindromo \n");
	}
		else {
			printf("a palavra nao eh palindromo \n");
		}
		
	return 0;
}
