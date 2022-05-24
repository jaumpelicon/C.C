#include<iostream>
#include<map>
#include<stdio.h>

using namespace std;


int main(){

  int t;
  cin>>t;

  while(t--){
     int n;
     string p;
     double valor;
     cin>>n;
     map<string, double> produtos;

     for(int i=0; i<n; i++){
        cin.ignore();
        cin>>p>>valor;
        produtos[p] = valor;
     }

     int l, qtd;
     double precoTotal = 0;

     cin>>l;

     for(int i=0; i<l; i++){
        cin.ignore();
        cin>>p>>qtd;
        precoTotal+= produtos[p]*qtd;
     }

     printf("R$ %.2f\n", precoTotal);

  }

  return 0;

}
