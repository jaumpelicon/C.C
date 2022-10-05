#include <stdio.h>

int main(){
	int n = 0, u = 0, d = 0, c = 0, m = 0;
	
	scanf("%i", &n);
	
	/*m = n%10;
	c = (n / 100)%10;
	d = (n % 1000)%100;
	u = n1000;
	*/
	u = n / 1000;
	d = (n%1000) /100;
	c = ((n%1000) % 100)/10;
	m = n % 10;
	
	printf("%i%i%i%i\n",m,c,d,u);
	
	
	return 0 ;
	

}
