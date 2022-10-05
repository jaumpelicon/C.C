#include<stdio.h>
#include<string.h>
int main () {
    
    char str[20] = "", str2[20] = "";
    int i ;
    fgets(str,20,stdin);
    
    for(i = 0; i< 10; i ++){
    		str2[i] = str[i];
	}
    for (i = 10;i < 20; i++){
    	str2[i] = str2[19-i];
    	
	}
  printf("%s",str2);
  /*  for(i=0;i<20;i++){
    	if (str2[i]!= '\0' && '\n'){
    		printf("%c",str2[i]);
		}
	}*/
    
    
	return 0;
}
