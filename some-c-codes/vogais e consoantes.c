#include<stdio.h>

int main () {
	char palavra[7];
	int contador,contador1;
	scanf ("%s",palavra);
	contador = 0;
	contador1 = 0;
	
	if (palavra[0] == 'a'|| palavra[0] == 'e' || palavra[0] == 'i'|| palavra[0] == 'o'|| palavra[0] == 'u') {
		contador = contador + 1;  
	}
	else {
		contador1 = contador1 + 1;
	}
	if (palavra[1] == 'a'|| palavra[1] == 'e' || palavra[1] == 'i'|| palavra[1] == 'o'|| palavra[1] == 'u') {
		contador = contador + 1;  
	}
	else {
		contador1 = contador1 + 1;
	}
	if (palavra[2] == 'a'|| palavra[2] == 'e' || palavra[2] == 'i'|| palavra[2] == 'o'|| palavra[2] == 'u') {
		contador = contador + 1;  
	}
	else {
		contador1 = contador1 + 1;
	}
	if (palavra[3] == 'a'|| palavra[3] == 'e' || palavra[3] == 'i'|| palavra[3] == 'o'|| palavra[3] == 'u') {
		contador = contador + 1;  
	}
	else {
	contador1 = contador1 + 1;
	}
	if (palavra[4] == 'a'|| palavra[4] == 'e' || palavra[4] == 'i'|| palavra[4] == 'o'|| palavra[4] == 'u') {
		contador = contador + 1;  
	}
	else {
		contador1 = contador1 + 1;
	}
	if (palavra[5] == 'a'|| palavra[5] == 'e' || palavra[5] == 'i'|| palavra[5] == 'o'|| palavra[5] == 'u') {
		contador = contador + 1;  
	}
	else {
		contador1 = contador1 + 1;
	}
	if (palavra[6] == 'a'|| palavra[6] == 'e' || palavra[6] == 'i'|| palavra[6] == 'o'|| palavra[6] == 'u') {
		contador = contador + 1;  
	}
	else {
		contador1 = contador1 + 1;
	}
	printf("Vogais: %i\nConsoantes: %i\n",contador,contador1);
	
	return 0;
}
