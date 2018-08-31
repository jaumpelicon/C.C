#include <stdio.h>

int main () {
 
 int conta1,conta2,conta4,conta5,conta6;
 double conta3;
 
 conta1 = 10 + 8;
 conta2 = -9-8;
 conta3 = 10234.235 * -2.34;
 conta4 = 192 / 10;
 conta5 = 192 % 10;
 conta6 = 192 % 100;
  
 printf ("10 + 8 = %i \n",conta1);
 printf ("-9 - 8 = %i \n",conta2);
 printf ("10234.235 * -2.34 = %.6lf \n",conta3);
 printf ("192 / 10 = %i \n",conta4);
 printf ("192 %% 10 = %i \n",conta5);
 printf ("192 %% 100 = %i \n",conta6);

 return 0;

}
