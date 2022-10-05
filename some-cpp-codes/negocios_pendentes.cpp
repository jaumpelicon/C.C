#include<iostream>
#include<stack>

using namespace std;

int main(){

    string s;
    cin>>s;
    stack<char> parenteses;

    for(int i=0; i<s.size(); i++){
      if(s[i]=='('){
            parenteses.push('(');
      }
      else if(s[i]==')'){
        if(parenteses.size()!=0){
           parenteses.pop();
        }
      }
    }

    if(parenteses.size() != 0) cout<<"Ainda temos "<<parenteses.size()<<" assunto(s) pendente(s)!"<<endl;
    else cout<<"Partiu RU!"<<endl;
 

  return 0;
}
