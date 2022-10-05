#include<iostream>
#include<stack>
#include<map>

using namespace std;

int main(){

   int m,n;
   cin>>m>>n;
   map<string, int> mapa;
   string cargo;
   int valor;
   while(m--){
       cin>>cargo>>valor;
        mapa.insert(pair<string, int>(cargo,valor));
   } 
   string aux;
   int soma = 0;
    while (n!=0) {
        cin>>aux;
        if(aux == "."){
            cout<<soma<<endl;
            soma = 0;
            n--;
        }
        else{
            map<string,int>::iterator it;
            it = mapa.find(aux);
            if ( it != mapa.end()){
               soma += it->second;  
            }
        }
    }
  return 0;
}
