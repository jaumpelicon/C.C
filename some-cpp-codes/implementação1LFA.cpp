#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main (){
	
	string palavra;
	string numeros = "0123456789";

	while(true){
		cin>>palavra;
		for(int i=0 ; i<=9 ; i++){
			if(palavra[0] == numeros[i] ){
				cout<<"Palavra nao aceita, programa encerrado"<<endl;
				return 0;
			}
		}		
		cout<<"Palavra aceita"<<endl<<endl;	
	}

	return 0;
}
