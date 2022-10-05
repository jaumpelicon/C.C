#include<stdio.h>
int main () {
	int a=0,cont = 1,vogais =0;
	char string[50];
  //  scanf("%s",&string);
	fgets (string,50,stdin);
	for( a= 0;a < 50;a++){
	 if(string[a] == ' ' ){
		cont ++;
	}	
	if (string[a] == 'a'||string[a] == 'e'|| string[a] == 'i'||string[a] == 'o' ||string[a] == 'u'){
		vogais ++;
	}
	}
	printf("%i \n%i",cont,vogais);
	
	
	
	return 0;
}
