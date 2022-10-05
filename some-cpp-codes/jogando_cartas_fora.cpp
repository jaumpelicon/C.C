#include<iostream>
#include<queue>

using namespace std;

int main(){

  int n;

  while(cin>>n){

    if(n==0) break;

    queue<int> fila;

    for(int i=1; i<=n; i++){
        fila.push(i);
    }

    cout<<"Discarded cards: ";
    bool first = true;

    while(fila.size()>1){

       if(first){
          cout<<fila.front();
          first = false;
       }
       else{
          cout<<", "<<fila.front();
       }

       fila.pop();
       fila.push(fila.front());
       fila.pop();
    }

    cout<<endl<<"Remaining card: "<<fila.front()<<endl;
  }
  return 0;
}
